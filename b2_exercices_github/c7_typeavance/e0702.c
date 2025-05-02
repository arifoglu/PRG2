#include <stdio.h>
#include <string.h>

enum StatutJoueur{ EN_LIGNE, HORS_LIGNE, EN_JEU, EN_PAUSE };

void afficher(enum StatutJoueur statut){
    switch(statut){
        case EN_LIGNE  : printf("Le joueur est actuellement en ligne.\n");break;
        case HORS_LIGNE: printf("Le joueur est hors ligne.\n");break;
        case EN_JEU    : printf("Le joueur est actuellement en jeu.\n");break;
        case EN_PAUSE  : printf("Le jeu est en pause.\n");break;
    }
}

void changer_statut(enum StatutJoueur *statut,enum StatutJoueur nouveauStatut){
    *statut = nouveauStatut;
    afficher(*statut);
}

int main() {
    enum StatutJoueur statut_actuel = EN_LIGNE;
    afficher(statut_actuel);
    changer_statut(&statut_actuel,EN_JEU);
    changer_statut(&statut_actuel,EN_PAUSE);
    changer_statut(&statut_actuel,HORS_LIGNE);
    return 0;
}