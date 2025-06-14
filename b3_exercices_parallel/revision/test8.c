#include <stdio.h>
#include <stdlib.h>


int main () {
    // dynamic array
    int *tab;
    tab = (int *)malloc(sizeof(int));
    if(tab == NULL)return;
    free(tab);

    // 
    int **tab;
    tab = (int *)malloc(2 * sizeof(int));
    if(tab == NULL){
        printf("Error\n");exit(EXIT_FAILURE);
    }
    for(int i = 0; i < 2 ;++i){
        tab[i] = (int *)malloc(3 * sizeof(*tab));
        if(tab[i] == NULL){
            printf("Error\n");exit(EXIT_FAILURE);
        }
    }
    for(int i = 0; i < 2;++i){
        free(tab[i]);
    }
    free(tab);

    return EXIT_SUCCESS;
}
