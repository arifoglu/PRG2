/*
 Écrire un programme qui calcule la durée totale de la chute connaissant la hau-teur totale h de l’immeuble saisi au clavier. (On pourra utiliser la fonction sqrt de labibliothèque math.h qui calcule la racine carrée d’un nombre.)
(en mètres) :
            h = 1/2 g.t^2      (g = 9.81 (exprimé en (m.s^-2))
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    const float g = 9.81;
    float h, t;
    printf("Entre la hauteur(mètre): ");
    scanf("%f",&h);
    
    t = sqrt(2.0 * h / g); 

    printf("la hauteur = %.1f\nla durée = %.1f\n",h,t);
    
    
    return EXIT_SUCCESS;
}