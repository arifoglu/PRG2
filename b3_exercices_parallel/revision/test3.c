#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int i, somme = 0;

    printf("Entrez : \n");
    while(1){
        scanf("%d",&i);
        somme += i;
        if(i == 0)break;
    }
    printf("La somme : %d\n",somme);

    return EXIT_SUCCESS;
}
