#include <stdio.h>
#include <stdlib.h>

#define CAPACITE 5

int main() {
    int num;
    int *tab = NULL;
    int capacite = CAPACITE;
    int count = 0;

    tab = (int *)malloc(capacite* sizeof(*tab));
    if(tab == NULL){
        goto lib;
    }
    
    while(1){
        printf("Entrez un entier positif (une lettre pour finir):");
        
        // verifier l'entre
        if(scanf("%d",&num) != 1){break;}
        
        //nettoie le tampon
        while(getchar() != '\n');

        tab[count] = num;
        count++;

        if(count == capacite){
            capacite *= 2;
           int  *tab2 = (int *)realloc(tab,capacite * sizeof(*tab));
           if(tab2 == NULL){
            // si realloc échoué
                break;
           }
           // si realloc reussi
           tab = tab2;
        }
        
    }

    printf("Vous avez entrez :");
    for(int i = 0; i < count;++i){
        printf("%d ",tab[i]);
    }
    printf("\n");

    lib:
    free(tab);

    return 0;
}
