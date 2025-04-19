#include <stdio.h>
#include <string.h>

void lire_ligne(char *str);
void lire_ligne2(const char *str);

int main() {
    char text[20];
    printf("[?] Saisissez une ligne de mots et parentheses : ");
    fgets(text,sizeof(text),stdin);

    size_t len = strlen(text);
    if(len > 0 && text[len - 1]== '\n'){
        text[len -1] = '\0';
    }

    lire_ligne(text);
    
    lire_ligne2(text);

    return 0;
}

void lire_ligne(char *str){
    if((str[0] == '(') && str[strlen(str) - 1] != ')'){
        printf("Il manque des parentheses :( \n");
    }else if((str[0] == '(') && str[strlen(str) - 1] == ')'){
        printf("Parenthèses correctement placées :)\n");
    }else if((str[0] != '(') && str[strlen(str) - 1] == ')'){
        printf("Parenthèse ouvrante manquante :( \n");
    }    
}

void lire_ligne2(const char *str){
    const char *first = strchr(str,'(');
    const char *last = strchr(str,')');
    if (first && !last) {
        printf("Il manque une parenthèse fermante :(\n");
    } else if (!first && last) {
        printf("Parenthèse ouvrante manquante :(\n");
    } else if (first && last && first < last) {
        printf("Parenthèses correctement placées :)\n");
    } else {
        printf("Pas de parenthèses ou mal placées.\n");
    }
}

