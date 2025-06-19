#include <stdio.h>


void inverser(int tab[], int size){
    for(int i = 0; i < size / 2;++i){
        int temp = tab[i];
        tab[i] = tab[size - 1 -i];
        tab[size - 1 -i] = temp;
    }
}

int main() {
    int tab[] = {1,2,3,4};
    inverser(tab,4);
    for(int i = 0; i < 4; ++i){
    printf("%d ", tab[i]);
    }


    return 0;
}
