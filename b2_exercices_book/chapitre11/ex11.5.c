#include <stdio.h>

#define TAILLE 5

int somme(int t[], int size);

int main() {
    int t[TAILLE];

    for(int i = 0; i < TAILLE; ++i){
        printf("t[%d] = ",i);
        scanf("%d",&t[i]);
    } 
    printf("\n");

    printf("Somme : %d\n",somme(t,TAILLE));

    return 0;
}

int somme(int t[], int size){
    int result = 0;
    for(int i = 0; i < size;++i){
        result += t[i];
    }
    return result;
}


