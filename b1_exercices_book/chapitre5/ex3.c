/*
Afficher un triangle rempli d’étoiles, s’étendant sur un nombre de lignes fourni
en donnée etse présentant comme dans cet exemple 
*  
**  
***  
****  
*****
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter un nombre : ");
    scanf("%d",&n);
    for(int i = 0 ; i < n;++i){
        for(int j = 0 ; j <= i;++j){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}