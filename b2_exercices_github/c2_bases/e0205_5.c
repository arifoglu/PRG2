#include <stdio.h>

int main(){
    int i,somme = 0;
    printf("Entrez des nombres pour additionner(0 pour terminer):\n");
    do{
        scanf("%d",&i);
        somme += i;
    }while(i != 0);
    printf("La somme des nombres est :%d\n",somme);
    return 0;
}