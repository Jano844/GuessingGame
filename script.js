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

// Berechtigungen anfordern
if (typeof DeviceOrientationEvent.requestPermission === 'function') {
    DeviceOrientationEvent.requestPermission()
        .then(permissionState => {
            if (permissionState === 'granted') {
                // Berechtigung erteilt
                window.addEventListener('deviceorientation', handleOrientation);
            } else {
                // Berechtigung verweigert
                alert("Berechtigung für die Geräteorientierung wurde verweigert.");
            }
        })
        .catch(error => {
            console.error("Fehler beim Anfordern der Berechtigung:", error);
        });
} else {
    // Fallback für Geräte, die keine Berechtigung benötigen
    window.addEventListener('deviceorientation', handleOrientation);
}
