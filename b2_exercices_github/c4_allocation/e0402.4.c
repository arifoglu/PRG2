#include <stdio.h>

#define WIDTH 7
#define HEIGHT 6

int main() {
    // déclarer un tableau tab 
    int tab1d[HEIGHT * WIDTH];

    // remplir ce tableau avec la table de multiplication
    for(int i = 0; i < HEIGHT ;++i){
        for(int j = 0; j < WIDTH;++j){
            tab1d[i * WIDTH + j] = (i + 1) * (j + 1);
        }
    }

    int *tab = (int*)tab1d;

    // afficher le tableau
    for(int i = 0; i < HEIGHT ;++i){
        for(int j = 0; j < WIDTH;++j){
           printf("%3d",tab[i * WIDTH + j]);
        }
        printf("\n");
    }
}