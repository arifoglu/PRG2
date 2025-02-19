#include <stdio.h>

int main(){
    int age;
    do{
        printf("Entrez votre age:");
        scanf("%d",&age);
    }while(age < 18);
    printf("Acces accordé.\n");
    return 0;
}