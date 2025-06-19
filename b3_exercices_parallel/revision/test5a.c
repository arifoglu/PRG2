#include <stdio.h>

void palindrome(int nombre){
    int original = nombre;
    int inverse = 0;
    do{
        inverse = inverse * 10 + nombre %10;
        nombre /= 10;        
    }while(nombre > 0);

    if(inverse == original){
        printf("palindrome");
    }else{
        printf("no palindrome");
    }   
}

int main() {
    int nombre;

    printf("Entrez :");
    scanf("%d",&nombre);

    palindrome(nombre);

    return 0;
}
