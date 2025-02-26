/*
Écrire un programme C qui convertit une température entrée au clavier expriméeen
degrés Fahrenheit et aﬃche une valeur approchée de la même température en
de-grés Celsius. Les températures seront exprimées par des nombres réels.
=> C ≈ 0.55556 × (F − 32)
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float degre_F, degre_C;
    printf("Entrez une tempèrature Fahrenheit : ");
    scanf("%f",&degre_F);

    degre_C = 0.55556 * (degre_F - 32.0);

    printf("%f Fahrenheit ≈ %fC°\n",degre_F, degre_C);

    return EXIT_SUCCESS;
}