#include <stdio.h>

int f(int a, int b, int c){
    return a > c ? (a > b ? a : b) : (b > c ? b : c);
}

int main() {
    int a, b, c;
    printf("numero1 :");scanf("%d",&a);
    printf("numero2 :");scanf("%d",&b);
    printf("numero3 :");scanf("%d",&c);
    printf("max : %d\n",f(a,b,c));
    return 0;
}