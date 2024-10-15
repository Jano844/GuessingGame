// Funktion zur Handhabung der Geräteorientierung
function handleOrientation(event) {
    const beta = event.beta;   // Neigung um die X-Achse

    // Überprüfen, ob das Gerät nach oben oder unten geneigt ist
    const threshold = 10; // Schwellenwert für die Neigung (in Grad)

    if (beta > threshold) {
        // Handy ist nach oben geneigt
        document.body.style.backgroundColor = "red"; // Hintergrund rot
        setTimeout(() => {
            document.body.style.backgroundColor = "lightblue"; // Hintergrund zurücksetzen
        }, 1000); // Nach 1 Sekunde zurücksetzen
    } else if (beta < -threshold) {
        // Handy ist nach unten geneigt
        document.body.style.backgroundColor = "green"; // Hintergrund grün
        setTimeout(() => {
            document.body.style.backgroundColor = "lightblue"; // Hintergrund zurücksetzen
        }, 1000); // Nach 1 Sekunde zurücksetzen
    }
}

// Ereignis-Listener hinzufügen
window.addEventListener('deviceorientation', handleOrientation);
