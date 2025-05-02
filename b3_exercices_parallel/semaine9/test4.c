#include <stdio.h>
#include <string.h>

#define LONGEUR_NOM 100

struct Personne {
    char *nom;
    int age;
};

int main() {
    struct Personne qq;

    // sadece struct Personne nom icin memory allocation yapar.
    qq.nom = malloc(LONGEUR_NOM);
 
    if(qq.nom != NULL){
        strcpy(qq.nom,"Alice");
    }

    free(qq.nom);


    return 0;
}