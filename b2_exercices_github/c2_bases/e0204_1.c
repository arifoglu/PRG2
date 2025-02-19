#include <stdio.h>

int main(){
    int nombre;
    
    printf("Entrez :");
    scanf("%d",&nombre);

    if(nombre % 3 == 0 && nombre % 13 == 0){
        printf("Sortie : %d est divisible par 3 et 13\n",nombre);
    }else{
        printf("Sortie : %d n'est pas divisible par 3 et 13\n",nombre);
    }

    return 0;
}