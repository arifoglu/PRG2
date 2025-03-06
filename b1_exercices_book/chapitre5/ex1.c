/*
Écrire un programme réalisant exactement la même chose, en employant, 
à la place del’instruction for :
                                ● une instruction while,
                                ● une instruction do... while
*/
#include <stdio.h>

int main() {
    int i, n, som;
    som = 0;
    /*
    for(i = 0; i < 4;i++){
        printf("donnez un entier :");
        scanf("%d",&n);
        som += n;
    }
    printf("Somme : %d\n",som);
    */

    // while
    /*
    i = 0;
    while(i < 4){
        printf("donnez un entier :");
        scanf("%d",&n);
        som += n;
        i++;
    }
    printf("Somme : %d\n",som);
    */


    // do while
    i = 0;
    do{
        printf("donnez un entier :");
        scanf("%d",&n);
        som += n;
        i++;
    }while(i < 4);
    printf("Somme : %d\n",som);

    return 0;
}