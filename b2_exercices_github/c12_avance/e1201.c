
#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int soustraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erreur : division par zéro\n");
        return 0;
    }
}

int (*operations[4])(int,int) = {addition, soustraction, division, multiplication};

int main () {
    int choix;
    int a, b, result;

    printf("Choisir une operation : \n");
    printf("0. Addition\n");
    printf("1. Soustraction\n");
    printf("2. Multiplication\n");
    printf("3. Division\n");
    printf("Votre choix : ");
    scanf("%d",&choix);

    if( choix < 0 || choix > 3){
        return 1;
    }

    printf("Entrez deux numeros :");
    scanf("%d %d",&a, &b);

    result = operations[choix](a,b);
    printf("Le resultat %d\n",result);
    
    return 0;
}