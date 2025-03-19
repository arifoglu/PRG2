#include <stdio.h>

void echange(int *a, int *b);

int main() {
    int a, b;
    printf("a : ");
    scanf("%d",&a);
    while(getchar() != '\n');
    printf("b : ");
    scanf("%d",&b);
    
    printf("Avant l'echange a : %d, b : %d\n",a,b);
    echange(&a,&b);
    printf("Après l'echange a : %d, b : %d\n",a,b);
}

void echange(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


