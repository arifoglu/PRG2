#include <stdio.h>

int main(){
    float a, b,resultat = 0.0;
    char c;
    
    printf("Entrez : ");
    scanf("%f %c %f",&a, &c, &b);
    
    
    switch(c){
            case '+' : resultat = a + b; break;
            case '-' : resultat = a - b; break;
            case '*' : resultat = a * b; break;
            case '/' : resultat = a / b; break;
            default : printf("invalid operator!!!");return -1;
    }
    
    printf("%.1f %c %.1f = %.1f\n",a, c, b, resultat);
    return 0;
}