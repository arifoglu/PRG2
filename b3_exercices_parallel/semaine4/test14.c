#include <stdio.h>
#include <stdlib.h>

int main() {   
    int lignes, colonnes, *tab1d = NULL, **tab2d = NULL;

    printf("nb de colonnes ? : ");
    scanf("%d",&colonnes);

    tab1d = (int *)malloc(lignes * colonnes * sizeof(int));
    if(tab1d == NULL){
        goto lib;
    }
    tab2d = (int **)malloc(lignes * sizeof(int));
    if(tab2d == NULL){
        goto lib;
    }
    

    lib:
    free(tab1d);
    free(tab2d);
}
