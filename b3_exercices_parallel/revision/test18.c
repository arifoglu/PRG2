#include <stdio.h>
#include <stdbool.h>

bool lire_ligne(char *chaine, size_t max){
    size_t i;

    for(i = 0; i < max - 1;++i){
        if(scanf("%c",&c) != 1 )return false;
        else if(c == '\n')break;

        chaine[i] = c;
    }
    chaine[i] = '\0';
    return true;
}

int main() {
    char s[255];
    printf("Saisissez une ligne de mots et parentheses: ");
    lire_ligne(s,sizeof(s));

    int n = 0;

    for(char *t = s; *t != '\0';++t){
        if(*t == '(')++n;
        else if(*t == ')')--n;
        if(n < 0)break;
    }

    if(n == 0) printf("le comte bonne\n");
    else printf("il manque des parantez\n");

    return 0;
}

