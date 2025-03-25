#include <stdio.h>

#define WIDTH 7
#define HEIGHT 6

int main() {
    // déclarer un tableau tab 
    int tab2d[HEIGHT][WIDTH];

    // remplir ce tableau avec la table de multiplication
    for(int i = 0; i < HEIGHT ;++i){
        for(int j = 0; j < WIDTH;++j){
            tab2d[i][j] = (i + 1) * (j + 1);
        }
    }

    // afficher le tableau
    for(int i = 0; i < HEIGHT ;++i){
        for(int j = 0; j < WIDTH;++j){
            printf("%3d",tab2d[i][j]);
        }
        printf("\n");
    }
}