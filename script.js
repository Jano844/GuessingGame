let initialOrientation = null;

function changeBackgroundColor(color) {
    document.body.style.backgroundColor = color;
    setTimeout(() => {
        document.body.style.backgroundColor = 'lightblue'; // Zurück zur Standardfarbe
    }, 1000);
}

window.addEventListener('deviceorientation', (event) => {
    if (initialOrientation === null) {
        initialOrientation = {
            alpha: event.alpha,
            beta: event.beta,
            gamma: event.gamma
        };
    }

    const calibratedAlpha = event.alpha - initialOrientation.alpha;
    const calibratedBeta = event.beta - initialOrientation.beta;

    // Die Schwellenwerte für das Ändern der Hintergrundfarbe
    if (calibratedBeta > 10) { // Nach oben geneigt
        changeBackgroundColor('red');
    } else if (calibratedBeta < -10) { // Nach unten geneigt
        changeBackgroundColor('green');
    }
});
