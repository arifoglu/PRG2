/*
Soit la fonction mathématique f déﬁnie par f (x) = (2x + 3)(3x^2+ 2)
Écrire un programme C qui calcule l’image par f d’un nombre saisi au clavier
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, func;
    printf("Entrez un nombre : ");
    scanf("%f",&x);

    func = (2.0 * x + 3.0) * (3.0 * x * x + 2.0);
    printf("f(%.1f) = %.1f\n",x,func);
    
    return EXIT_SUCCESS;
}