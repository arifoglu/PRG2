#include <stdio.h>
#include <stdlib.h>

void affiche(char str[]){
    int i = 0;
    while(str[i] != 0){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}

int main() {
    char str[80];
    char c;
    int i = 0;

    printf("Entrez une phrase : ");

    //scanf("%s",str);
    //affiche(str);

    scanf(" %[^\n]",str);
    affiche(str);    
    return 0;
}