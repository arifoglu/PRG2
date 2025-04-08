#include <stdio.h>
#include <stddef.h>
#include <string.h>


int main() {
    char texte[132];
    char texte2[132] = {0};
    printf("Text : ");
    fgets(texte,sizeof(texte),stdin);

    char *ptr = texte;
    size_t j = 0 ;

    while(*ptr != '\0'){
        if(*ptr != 'e'){
            texte2[j++] = *ptr;
        }
        ptr++;
    }
    printf("%s\n",texte2);

    return 0;
}