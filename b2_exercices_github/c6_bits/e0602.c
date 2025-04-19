#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // Pour usleep

#define NMAX 100
#define CLIGNOTEMENTS 20

void afficherLEDs(unsigned char leds) {
    printf("\r"); // Déplace le curseur au début de la ligne
    for (int i = 7; i >= 0; i--) {
        printf("%c", (leds & (1 << i)) ? '*' : '-');
    }
    fflush(stdout); // Vide le tampon de sortie pour afficher immédiatement les LEDs
}

int main() {
    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    unsigned char leds = 0xAA; // Les LEDs *-*-*-*- sont allumées au début

    for (int i = 0; i < CLIGNOTEMENTS; i++) {
        afficherLEDs(leds);
        leds = ~leds; // Inverse l'état des LEDs pour simuler le clignotement

        float delai = (rand() % 900 + 100) / 1000.0; // Génère un délai aléatoire entre 0.1 et 1 seconde

        usleep(delai * 1000000); // Attend le délai aléatoire
    }

    printf("\n");

    return 0;
}