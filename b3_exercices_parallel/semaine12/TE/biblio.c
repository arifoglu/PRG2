#include <stdio.h>
#include <string.h>

#include "biblio.h"

void ajouterLivre(livre_t collection[], int *nbLivres, livre_t nouveauLivre) {
    collection[*nbLivres] = nouveauLivre;
    (*nbLivres)++;
}

const livre_t *rechercherLivreParTitre(const livre_t collection[], int nbLivres, const char *titre) {
    for (int i = 0; i < nbLivres; i++) {
        if (strcmp(collection[i].titre, titre) == 0) {
            return &collection[i];
        }
    }
    return NULL;
}
