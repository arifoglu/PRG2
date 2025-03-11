#include <stdio.h>

int main(void) {
    int n1, n2;
    printf("n1 : ");
    scanf("%d",&n1);
    printf("n2 : ");
    scanf("%d",&n2);

    int quotient = n1 / n2;
    printf("%d / %d = %d\n",n1 ,n2, quotient);

    float frac = (float) n1 / n2 - quotient; 
    printf("la partie fractionnaire de %d / %d => %f\n",n1 ,n2, frac);

    float l;
    char c;
    printf("l : ");
    scanf("%f",&l);

    c = (char) ((int) (l * frac) % 256);
    printf("Caractère : %c\n",c);


    return 0;
}