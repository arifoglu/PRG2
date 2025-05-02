#include <stdio.h>
#include <string.h>

struct Livre{
    char titre[100];
    char auteur[50];
    int annee;
    int nbr;
};

struct Livre ajouter(char  *titre,char *auteur, int annee,int nb){
    struct Livre l;
    
    strcpy(l.titre,titre);
    strcpy(l.auteur,auteur);
    
    l.annee = annee;
    l.nbr = nb;

    return l; 
}

void update(struct Livre *l, int changement){
    l->nbr += changement;
}

void imprimerLivre(struct Livre l){
    printf("Titre : %s\nAuteur: %s\nAnnee : %d\nNbr : %d\n",l.titre,l.auteur,l.annee,l.nbr);
}

int main() {
    struct Livre livre = ajouter("Petit prince","Antoine",1943,30);
    imprimerLivre(livre);
    update(&livre,-5);
    imprimerLivre(livre);

    return 0;
}