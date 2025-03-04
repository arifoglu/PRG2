#include <stdio.h>

int main(){
    int nombre, inverse=0;

    printf("Entrez un nombre :");
    scanf("%d",&nombre);
    do{
        inverse = inverse * 10 + nombre % 10;
        nombre /= 10;
    }while(nombre > 0);
    printf("le nombre inversé : %d\n",inverse);
    return 0;
}