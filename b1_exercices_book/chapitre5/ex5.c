/*
Écrire un programme qui détermine la n-ième valeur un (n étant fourni en donnée) de la« suite de Fibonacci » définie comme suit :
u1 = 1
u2 = 1
un = un-1 + un-2    pour n>2
*/
#include <stdio.h>
#include <math.h>

int fibo(int n){
    if(n <= 1) return 1;
    return fibo(n - 2) + fibo(n - 1);
}

int main() {
    int n;
    do{
        printf("Entrez un nombre : ");
        scanf("%d",&n);
    }while(n < 1);

    printf("%d\n",fibo(n));
    return 0;
}