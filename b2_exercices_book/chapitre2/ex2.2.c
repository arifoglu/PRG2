/*
Lors d’une opération de promotion, un magasin de composants hardwareapplique une réduction de 10% sur tous les composants. Écrire un programme quilit le prix d’un composant au clavier et aﬃche le prix calculé en tenant compte de laréduction
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float prix;
    printf("Entrez le prix : ");
    scanf("%f",&prix);
    
    prix *= 0.9;
    
    printf("Après la réduction le prix : %.1f\n",prix);

    return EXIT_SUCCESS;
}