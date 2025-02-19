#include <stdio.h>

int main(){
    char prenom[50];
    int age;

    printf("Entrez votre prenom et age ");
    scanf("%s %d",prenom, &age);

    printf("Bienvenu %s. Vous avez %d ans.",prenom,age);

    return 0;
}