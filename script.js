let initialOrientation = null;

function changeBackgroundColor(color) {
    console.log(`Changing background color to: ${color}`);
    document.body.style.backgroundColor = color;
    setTimeout(() => {
        document.body.style.backgroundColor = 'lightblue'; // Zurück zur Standardfarbe
    }, 1000);
}

window.addEventListener('deviceorientation', (event) => {
    console.log('Device Orientation Event Fired');
    if (initialOrientation === null) {
        initialOrientation = {
            alpha: event.alpha,
            beta: event.beta,
            gamma: event.gamma
        };
        console.log(`Initial Orientation: ${JSON.stringify(initialOrientation)}`);
    }

    const calibratedAlpha = event.alpha - initialOrientation.alpha;
    const calibratedBeta = event.beta - initialOrientation.beta;

    console.log(`Calibrated Alpha: ${calibratedAlpha}, Calibrated Beta: ${calibratedBeta}`);

    // Die Schwellenwerte für das Ändern der Hintergrundfarbe
    if (calibratedBeta > 10) { // Nach oben geneigt
        changeBackgroundColor('red');
    } else if (calibratedBeta < -10) { // Nach unten geneigt
        changeBackgroundColor('green');
    }
});
