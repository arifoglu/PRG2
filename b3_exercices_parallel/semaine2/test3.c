#include <stdio.h>
#include <stdlib.h>

int main() {
    int entier;
    float reel;
    char c;
    char prenom[30], nom[30];

    printf("Prenom et nom :");
    scanf("%29s %29s",prenom,nom);
    printf("%s %s",prenom,nom);

    return 0;
}