#include <stdio.h>

int main(){
    int somme = 0;
    for(int i = 1;i <=100;++i){
        somme += i;
    }
    printf("La somme est : %d\n",somme);
    return 0;
}