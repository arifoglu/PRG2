#include <stdio.h>

int f(int n){
    int somme = 1;
    for(int i = 2;i <= n;++i){
        somme += (i * i * i);
    }   
    return somme;
}

int main() {
    int n;
    printf("n : ");
    scanf("%d",&n);
    printf("somme : %d\n",f(n));

    return 0;
}