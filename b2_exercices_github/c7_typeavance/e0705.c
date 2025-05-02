#include <stdio.h>
#include <string.h>

#define TAILLE 4

void find(const char *chaine[],const char *motif ,size_t taille){
    for(size_t i = 0;i < taille;++i){
            if(strstr(chaine[i],motif) != NULL){
                printf("%s\n",chaine[i]);
            }  
    }
}

int main() {
    const char *chaine[] = {"commande1 subcmd","autre commande","encore subcmd ici","dernière chaîne"};
    const char *motif = "subcmd";

    find(chaine,motif,TAILLE);

    return 0;
}