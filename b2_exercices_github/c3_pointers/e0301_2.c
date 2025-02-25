#include <stdio.h>
#include <stdlib.h>

int main() {
    char nom[50];
    int age;

    char* ptr_nom = nom;
    int* ptr_age = &age;

    char **ptr_ptr_nom = &ptr_nom;
    int **ptr_ptr_age = &ptr_age;

    printf("Entre un nom : ");
    scanf("%s",*ptr_ptr_nom);
    printf("Entre un age : ");
    scanf("%d",*ptr_ptr_age);

    printf("%s %d\n",nom,age);
    
    return EXIT_SUCCESS;
}