#include <stdio.h>

int main(){
    int i, max = 0;
    printf("Entrez des nombres pour trouver le maximum(-1 pour terminer):\n");

    while(i != -1){
        scanf("%d",&i);
        if(i > max){
            max = i;
        }
    }
    printf("Le plus grand nombre est : %d\n",max);
    return 0;
}