#include <stdio.h>
#include <string.h>

int main() {
    char verb[20];
    char *postfix[6] = {"e","es","e","ons","ez","ent"};
    char *prenom[6] = {"je","tu","il","nous","vous","ils"};
    char verb2[20] = {0};
    
    printf("verbe (indicatif): ");
    scanf("%19s",verb);

    char *ptr = verb;
    size_t j = 0;

    for(size_t i = 0; i < strlen(verb) - 2 ;i++){
        verb2[j++] = ptr[i];
    }
    verb2[j] = '\0';

    printf("Text2 : %s\n", verb2);

    for(size_t i = 0; i < 6 ;++i ){
        printf("%s %s%s \n",prenom[i], verb2, postfix[i]);
    }

    return 0;
}