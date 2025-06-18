#include <stdio.h>
#include <string.h>

typedef enum {FICTION, NON_FICTION, SCIENCE, BIOGRAPHY, HISTORY}Genre;

typedef struct{
    char titre[25];
    char auteur[25];
    int annee;
    Genre genre;
}livre_t;

void ajouterLivre(livre_t collection[], int *nbLivres, livre_t nouveauLivre) {
    if(*nbLivres >= 100){
        printf("Erreur : collection pleine\n");
        return;
    }else{
        collection[*nbLivres] = nouveauLivre;
        (*nbLivres)++;
    }
}

void afficherLivres(const livre_t collection[], int nbLivres) {
    for(size_t i = 0; i < nbLivres;++i){
        printf("%s\n",collection[i].titre);
        printf("%s\n",collection[i].auteur);
        printf("%d\n",collection[i].annee);
        printf("%d\n",collection[i].genre);
    }
}

const livre_t *rechercherLivreParTitre(const livre_t collection[], int nbLivres, const char *titre) {
    for(size_t i = 0; i< nbLivres;++i){
        if(strcmp(collection[i].titre,titre) == 0){
            return &collection[i];
        }
    }
    return NULL;
}

int main() {
   int choix;
   livre_t collection[100] ;
   int nbLivres = 0;
   
    do {
        printf("Menu:\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre par titre\n");
        printf("4. Quitter\n");
        printf("Choisissez une option: ");
        
        scanf("%d", &choix);

        if (choix == 1) {
        
           /* A compléter */
            livre_t nouveau;
            printf("Titre :");
            scanf("%s",nouveau.titre);
            printf("Auteur:");
            scanf("%s",nouveau.auteur);
            printf("Annee:");
            scanf("%d",&nouveau.annee);
            scanf("Genre");
            printf("%p",&nouveau.genre);
            ajouterLivre(collection,&nbLivres,nouveau);
           
        } else if (choix == 2) {
            
            /* A compléter */
            afficherLivres(collection,nbLivres);
        } else if (choix == 3) {

            /* A compléter */
            char titre[100];
            printf("titre:");
            scanf("%s",titre);

            const livre_t *livre = rechercherLivreParTitre(collection,nbLivres,titre);
            if(livre == NULL){
                printf("livre non trouvé\n");
            }else{
                printf("Titre : %s\n",livre->titre);
                printf("Auteur : %s\n",livre->auteur);
                printf("Annee : %d\n",livre->annee);
                printf("genres : %d\n",livre->genre);
            }
        }
    } while (choix != 4);
   
    return 0;
}