#include <stdio.h>
#include <string.h>

#define LONGEUR_NOM 100

struct Personne {
    char *nom;
    int age;
};

int main() {
    struct Personne *qqptr;

    // struct Personne icin memory allocation yapar.
    qqptr = malloc(sizeof(struct Personne));
    if(!qqptr){ return 1 ;};

    qqptr->nom= malloc(LONGEUR_NOM);
    
    if(qqptr->nom != NULL){
        strcpy(qqptr->nom,"Bob");
    }

    free(qqptr->nom);
    free(qqptr);

    return 0;
}