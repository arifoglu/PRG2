#include <stdio.h>
#include <stdlib.h>


// int tab[] ve int *tab aynidir.
void display(int tab[], int size){
    for(int i = 0; i < size;++i){
        printf("%d ",tab[i]);
    }
    printf("\n");
}

// pointer ile kullanimi
void display2(int *tab, int size){
    for(int i = 0; i < size;++i){
        printf("%d ",tab[i]);
    }
    printf("\n");
}

int main () {
    int tab[] = {10,20,30};

    display(tab,3);

    return EXIT_SUCCESS;
}
