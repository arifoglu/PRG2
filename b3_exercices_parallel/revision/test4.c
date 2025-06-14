#include <stdio.h>
#include <stdlib.h>


int main () {
    int i, max ;

    printf("Entrez des nombres pour trouver le maximum (-1 pour terminer):\n");
    scanf("%d",&i);
    max = i;
    
    while(1){
        scanf("%d",&i);
        if(i > max){
            max = i;
        }
        if(i == -1)break;
    }

    printf("Le plus grand nombre est %d\n",max);

    return EXIT_SUCCESS;
}
