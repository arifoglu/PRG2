#ifndef BIBLIO_H
#define BIBLIO_H

#define MAX_TITRE 100
#define MAX_AUTEUR 100

typedef struct {
    char titre[MAX_TITRE];
    char auteur[MAX_AUTEUR];
    int annee;
} livre_t;

/* Fonksiyon prototipleri */
void ajouterLivre(livre_t collection[], int *nbLivres, livre_t nouveauLivre);
void afficherLivres(const livre_t collection[], int nbLivres);
const livre_t *rechercherLivreParTitre(const livre_t collection[], int nbLivres, const char *titre);

#endif
