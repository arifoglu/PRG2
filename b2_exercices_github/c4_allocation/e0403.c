#include <stdio.h>
#include <stdlib.h>

int main() {
    // déclarer un tableau tab 
    int lignes, colonnes;
    int **tab2d;
    // remplir ce tableau avec la table de multiplication
    do{

        do{
            printf("Entrez le nombre de lignes: ");
            if(scanf("%d",&lignes) != 1){exit(EXIT_FAILURE);};
            while(getchar() != '\n');
            if(lignes < 0 ){
                printf("Erreur de saisie.Entrez un entier positif\n");
            }
        }while(lignes < 0);

        do{
            printf("Entrez le nombre de colonnes: ");
            if(scanf("%d",&colonnes) != 1){exit(EXIT_FAILURE);};
            while(getchar() != '\n');
            if(colonnes < 0 ){
                printf("Erreur de saisie.Entrez un entier positif\n");
            }  
        }while(colonnes < 0);
        
    }while(lignes < 0 || colonnes < 0);

    tab2d = (int **)malloc(lignes * sizeof(int *));
    if(tab2d == NULL){
        printf("Error d'allocation memoire\n");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < lignes;++i){
        tab2d[i] = (int * )malloc(colonnes * sizeof(int));
        if(tab2d[i] == NULL){
            printf("Error d'allocation memoire\n");
            exit(EXIT_FAILURE);
        }
    }

    // remplir
    for(int i = 0; i < lignes ;++i){
        for(int j = 0; j < colonnes ;++j)
        tab2d[i][j] = (i + 1) * (j + 1);
    }

    // afficher le tableau
    for(int i = 0; i < lignes ;++i){
        for(int j = 0; j < colonnes ;++j){
            printf("%3d",tab2d[i][j]);
        }
        printf("\n");
    }

    // liberation de la memoire
    for(int i = 0; i < lignes ;++i ){
        free(tab2d[i]);
    }
    free(tab2d);
}