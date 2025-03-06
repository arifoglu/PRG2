/*
) Écrire un programme qui affiche la table de multiplication des nombres de 1 à 10, sous laforme suivante 
*/
#include <stdio.h>

int main() {
    for(int i = 0; i <= 10;++i){
        printf("%3d",i);
        
        for(int j = 1; j <= 10;++j){
            printf("%3d ",j);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}