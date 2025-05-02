#include <stdio.h>
#include <string.h>

// Enum icersinde ilk deger 0 ,sonr 1 , 2 diye artar 
enum Direction{HAUT, BAS, GAUCHE, DROITE};

int main() {
    enum Direction dir;
    scanf("%d",&dir);

    switch(dir){
        case HAUT  : printf("Vers la HAUT\n")  ;break;
        case BAS   : printf("Vers la BAS\n")   ;break;
        case GAUCHE: printf("Vers la GAUCHE\n");break;
        case DROITE: printf("Vers la DROITE\n");break;
    }

    return 0;
}