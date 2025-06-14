#include <stdio.h>
#include <stdlib.h>

void inverser(int tab[], int taille){
    int inverse[taille];
    for(int i = 0; i < taille;++i){
        inverse[i] = tab[taille - 1 - i];
    }
    for(int i = 0; i < taille;++i){
        tab[i] = inverse[i];
    }
}

int main () {
    int tab[] = {1,2,3,4};
    inverser(tab,4);
    

    return EXIT_SUCCESS;
}
