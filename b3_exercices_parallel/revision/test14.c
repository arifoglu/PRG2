#include <stdio.h>
#include <stdlib.h>

#define LIGNES  2
#define COLONNES  2

int main () {
    int **tab2d = NULL;
    tab2d = (int **)malloc(LIGNES * sizeof(int *));
    if(tab2d == NULL){
        printf("Error\n");
        return EXIT_FAILURE;
    }

    for(int i = 0; i < LIGNES; ++i){
        tab2d[i] = (int *)malloc(COLONNES * sizeof(int));
        if(tab2d[i] == NULL){
            for(int j = 0; j < i;++j){
                free(tab2d[j]);
            }
            free(tab2d);
        }
    }

    for(int i = 0; i < LIGNES; ++i){
        for(int j = 0; j < COLONNES;++j){
            tab2d[i][j] = (i + 1) * (j + 1);
        }
    }

    for(int i = 0; i < LIGNES; ++i){
        for(int j = 0; j < COLONNES;++j){
            printf("%d",tab2d[i][j]);
        }
    }
    
    
   for(int i = 0; i < LIGNES;++i){
                free(tab2d[i]);
            }
    free(tab2d);



    return 0;
}
