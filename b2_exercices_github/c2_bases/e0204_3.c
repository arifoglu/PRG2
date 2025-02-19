#include <stdio.h>

int main(){
    int numero ;
    printf("Entree : Saisir le numero du jour : ");
    scanf("%d",&numero);
    switch(numero){
        case 1 : printf("Lundi\n");break;
        case 2 : printf("Mardi\n");break;
        case 3 : printf("Mercredi\n");break;
        case 4 : printf("Jeudi\n");break;
        case 5 : printf("Vendredi\n");break;
        case 6 : printf("Samedi\n");break;
        case 7 : printf("Dimanche\n");break;
        default : printf("Entrez le numero 1-7\n");
    }
    return 0;
}