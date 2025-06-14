#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <inttypes.h>

size_t lire_size(const char *message){
    int64_t n;
    printf("%s",message);
    while(scanf("%" SCNd64,&n) != 1 || n <= 0){
        while(getchar() != '\n');
    }

    return (size_t)n;
}

int main () {
    size_t lignes ;
    size_t colonnes;
    int **tab;

    lignes = lire_size("Entrez le nombre de lignes : ");
    colonnes = lire_size("Entrez le nombre de lignes :");

    tab = (int **)malloc(lignes * sizeof(int *));
    if(tab == NULL){
        printf("Error d'allocation\n");
        return 1;
    }
    for(int i = 0;i < lignes;++i){
        tab[i] = (int *)malloc(colonnes * sizeof(int));
        if(tab[i] == NULL){
            printf("Error d'alllocation\n");
            goto liberation;
        }
    }

    for(int i = 0; i < lignes;++i){
        for(int j = 0; j < colonnes;++j){
            tab[i][j] = (i + 1) * (j + 1);
        }
    }

    for(int i = 0; i < lignes;++i){
        for(int j = 0; j < colonnes;++j){
            printf("%d",tab[i][j]);
        }
        printf("\n");
    }

    liberation:
    for(int i = 0; i < lignes; ++i){
        free(tab[i]);
    }
    free(tab);

    return 0;
}
