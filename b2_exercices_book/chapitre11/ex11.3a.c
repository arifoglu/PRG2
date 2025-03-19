#include <stdio.h>

int main() {
    int a, b;
    printf("a : ");
    scanf("%d",&a);
    while(getchar() != '\n');
    printf("b : ");
    scanf("%d",&b);
    
    printf("Avant l'echange a : %d, b : %d\n",a,b);
    int t = a;
    a = b;
    b = t;
    printf("Après l'echange a : %d, b : %d\n",a,b);
}




