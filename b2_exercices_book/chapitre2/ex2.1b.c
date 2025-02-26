/*
Écrire un programme C qui convertit une température entrée au clavier expriméeen
degrés Fahrenheit et aﬃche une valeur approchée de la même température en
de-grés Celsius. Les températures seront exprimées par des nombres réels.
Même question qu’au a) pour la conversion inverse : de degrés Celsius en degrésFahrenheit
=> C ≈ 0.55556 × (F − 32)
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float degre_F, degre_C;
    printf("Entrez une tempèrature Celcius : ");
    scanf("%f",&degre_C);

    degre_F = (degre_C / 0.55556) + 32.0;

    printf("%f Celcius ≈ %f Fahrenheit\n",degre_C, degre_F);

    return EXIT_SUCCESS;
}