#include <stdio.h>
#include <stdlib.h>

#define NB_ELEMENTS 6

int main () {
    int lignes, colonnes, **tab2d = NULL;

    printf("nb de colonnes ? : ");
    scanf("%d",&colonnes);

    lignes = NB_ELEMENTS / colonnes;

    tab2d = (int **)malloc(lignes * sizeof(int *));
    if(tab2d == NULL){
        return EXIT_FAILURE;
    }

    for(int i = 0; i < lignes;++i){
        tab2d[i] = (int *)malloc(colonnes * sizeof(int));
        if(tab2d[i] == NULL){
            goto lib;
        }
    }

    lib:
    for(int i = 0; i < lignes;++i){
        free(tab2d[i]);
    }
    free(tab2d);

    return 0;
}
