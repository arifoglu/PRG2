#include <stdio.h>
#include <stdlib.h>

int main() {
    char nom[20];

    printf("Enter name : ");

    fgets(nom,sizeof(nom),stdin);

    printf("Your name is %s",nom);

    return EXIT_SUCCESS;
}