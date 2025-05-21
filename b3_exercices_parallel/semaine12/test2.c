#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main() {
    FILE *fichier;
    fichier = fopen("a.txt","r");

    if(fichier == NULL){
        if(errno == ENOENT){
            printf("fichier non trouvé\n");
        }else{
            printf("Error inattendu\n");
        }
        perror("Error lors de l'ouverture du fichier");
    }

    return 0;
}