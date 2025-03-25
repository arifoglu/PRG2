#include <stdio.h>
#include <stdlib.h>

void fill(int *tab, int lignes, int colonnes,int val){
    for(int i = 0; i <lignes ;++i){
        for(int j = 0 ;j < colonnes;++j){
            tab[i*colonnes + j] = val;
        }
    }
}
void display(int *tab, int lignes, int colonnes){
    for(int i = 0; i <lignes ;++i){
        for(int j = 0 ;j < colonnes;++j){
            printf("%d",tab[i * colonnes + j]);
        }
        printf("\n");
    }
}
int main() {   
    int tab[2][3] = {{1,2,3},{4,5,6}};
    fill((int *)tab,2,3,42);
    display((int * )tab,2,3);
}
