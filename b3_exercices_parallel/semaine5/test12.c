#include <stdio.h>
#include <stdlib.h>

#define NB_LIGNES   2
#define NB_COLONNES 3

int main() {   
    int tablo[NB_LIGNES ][NB_COLONNES] ={1,2,3,4,5,6};

    for(int i = 0; i < NB_LIGNES ;++i){
        for(int j = 0; j < NB_COLONNES ;++j){
            printf("%d",tablo[i][j]);
        }
        printf("\n");
    }
}
