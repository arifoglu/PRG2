/*
Une bille de plomb est lâchée du haut d’un immeuble et tombe en chutelibre. Au
bout d’un temps t (exprimé en secondes), la bille est descendue d’une hau-teur
(en mètres) :
            h = 1/2 g.t^2      (g = 9.81 (exprimé en (m.s^-2))
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    const float g = 9.81;
    float h, t;
    printf("Entre une durée : ");
    scanf("%f",&t);
    
    h = (g * t * t) / 2.0;

    printf("La durée = %.1f\nla hauteur = %.1f",t,h);
    
    
    return EXIT_SUCCESS;
}