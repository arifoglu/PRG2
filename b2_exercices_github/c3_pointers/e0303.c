#include <stdio.h>
#include <stdlib.h>

#define TAILLE 5

void somme(int taille, const int *tab1,const int *tab2,int *result){
    for(int i = 0; i < taille;++i){
        result[i] = tab1[i] + tab2[i];
    }
}
void afficher(int taille,const int *tab){
    for(int i = 0; i < taille;++i){
        printf("%d ",tab[i]);
    }
    printf("\n");
}
int main() {
    int t1[TAILLE], t2[TAILLE], result[TAILLE];

    for(int i = 0; i < TAILLE;++i){
        scanf("%d",&t1[i]);
    }
    for(int i = 0; i < TAILLE;++i){
        scanf("%d",&t2[i]);
    }
    
    somme(TAILLE,t1,t2,result);
    
    afficher(sizeof(t1)/ sizeof(t1[0]),t1);
    afficher(sizeof(t2)/ sizeof(t2[0]),t2);
    afficher(sizeof(result)/ sizeof(result[0]),result);
    
    return EXIT_SUCCESS;
}