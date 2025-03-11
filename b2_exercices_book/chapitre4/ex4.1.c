#include <stdio.h>

int main(void) {
    char c;
    printf("Entrez un caractère : ");
    scanf("%c",&c);
    printf("le code ASCI de %c => %d\n", c, c);

    return 0;
}