#include <stdio.h>

// Enum icersinde ilk deger 0 ,sonr 1 , 2 diye artar 
typedef enum {HAUT, BAS, GAUCHE, DROITE}Direction;

// union
typedef union{
    int i;
    float f;
    char *chaine;
}Donnees;

int main() {
    Direction dir;
    scanf("%d",&dir);
    switch(dir){
        case HAUT  : printf("Vers la HAUT\n")  ;break;
        case BAS   : printf("Vers la BAS\n")   ;break;
        case GAUCHE: printf("Vers la GAUCHE\n");break;
        case DROITE: printf("Vers la DROITE\n");break;
    }


    /*
    => union ayni memory alanini paylasarak kullanir.
    => *** union'da sadece bir üye aktif olabilir, çünkü tüm üyeler aynı bellek alanını kullanır.
    */
    Donnees d;
    d.i = 4;
    printf("int    : %d\n",d.i);

    d.f = 5.6;
    printf("float  : %.1f\n",d.f);

    d.chaine = "news";
    printf("chaine : %s\n",d.chaine);

    return 0;
}
