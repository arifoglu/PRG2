#include <stdio.h>

int longeur(const char *str){
    int i = 0;
    while(str[i] != 0 && str[i] != '\n'){
        i++;
    }
    return i;
}
void substring(const char *str,char * dest,int start, int len){
    int i;
    for(int i = 0 ; i < len && str[start + i] != '\0';i++ ){
        dest[i] = str[start + i];
    }
    dest[i] = '\0';
}

int main() {
    char ligne[100];
    char extrait[100];
    int total, position, longeur_sous;

    printf("Saisissez une ligne de mots: ");
    if(fgets(ligne, sizeof(ligne), stdin) == NULL){
        printf("Erreur de lecture\n");
        return -1;
    }

    total = longeur(ligne);

    if (total == 0) {
        printf("[!] Erreur: ligne vide refusée!\n");
        return 1;
    }

    printf("La ligne contient %d caracters\n",total);
    while (getchar() != '\n')
    ;

     printf("[?] Extraire APRES combien de caracteres? ");
    if (scanf("%d", &position) != 1 || position >= total || position < 0) {
        printf("[!]Erreur: position impossible!\n");
        return 1;
    }

    while (getchar() != '\n')
    ;

    printf("[?] Extraire combien de caracteres? ");
    if (scanf("%d", &longeur_sous) != 1 || longeur_sous < 1 || position + longeur_sous > total) {
        printf("[!] Erreur: longueur impossible!\n");
        return 1;
    }


    substring(ligne, extrait,position,longeur_sous);

    return 0;
}

