/*
Écrire un programme qui lit un nombre au clavier, répond 1 si le nombre estimpair et 0 si le nombre est pair
*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n %2 != 0){
        printf("%d\n",1);
    }else{
        printf("%d\n",0);
    }
    // n % 2 == 0 ? printf("%d",1) : printf("%d",0); 
    return 0;
}