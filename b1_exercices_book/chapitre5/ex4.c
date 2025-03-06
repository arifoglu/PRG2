/*
Déterminer si un nombre entier fourni en donnée est premier ou non
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, d ;    
    do{
        printf("Entrez un nombre superieure à 2 :");
        scanf("%d",&n);
    }while(n <= 2);

    d = 2;

    while((n % d) && (d <= sqrt(n)) ){
        d++;
    }
    if(n % d) {
        printf("%d est premier",n);
    }else{
        printf("%d n'est pas premier\n",n);
    }
    return 0;
}