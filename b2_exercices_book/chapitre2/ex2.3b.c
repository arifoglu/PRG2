/*
Soit la fonction mathématique f déﬁnie par f (x) = (2x + 3)(3x^2+ 2)
Une approximation de la dérivée f`de la fonction f est donnée en chaque point x,
pour h assez petit (proche de 0), par 
                                    f'(x) ≈ (f(x + h) - f(x)) / h
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, h, fx, fx_plus_h, dfx;
    printf("Entrez un nombre x et le parametre h :");
    scanf("%f %f",&x,&h);

    fx = (2.0 * x + 3.0) * (3.0 * x * x + 2.0);
    fx_plus_h = (2.0 * (x + h) + 3.0) * (3.0 * (x + h) * (x + h)+ 2.0);
    dfx = (fx_plus_h - fx) / h ;

    printf("f'(%.1f) = %.1f\n",x,dfx);
     
    
    
    return EXIT_SUCCESS;
}