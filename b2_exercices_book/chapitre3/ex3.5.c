/*
Écrire un programme qui lit un nombre r au clavier et calcule le périmètre etl’aire d’un disque de rayon r.
*/
#include <stdio.h>
#define pi 3.14
int main(){
    int r;
    float perimetre,aire;
    printf("r : ");
    scanf("%d",&r);

    perimetre = 2 * pi * r;
    aire = pi * r * r;

    printf("perimetre : %.2f\naire : %.2f\n",perimetre,aire);


    return 0;
}