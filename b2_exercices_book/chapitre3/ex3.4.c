/*
Écrire un programme qui arrondi un nombre réel saisi au clavier à deuxchiﬀres
après la virgule
*/
#include <stdio.h>

int main(){
    float x, arrondi;
    int multiple;

    scanf("%f",&x);
    
    printf("%.2f\n",x);    
    return 0;
}