#include <stdio.h>

// Taille maximum du tableau
#define TAILLE_MAX 10

// Tableau statique d'entiers avec éléments nuls
int iTableau[TAILLE_MAX] = { 3, 6, 0, 8, 97, 0, 5, 6, 0, 8 };

// Trouver les index des éléments nuls d'un tableau d'entiers
int main() {

    // --- DEBUT PARTIE A COMPLETER -----------------------------------------------

    // Déclaration de pointeurs sur des entiers
    // avec, notamment, les pointeurs sur le premier et dernier élément du tableau
    int *ptr_first = iTableau;
    int *ptr_last =  &iTableau[TAILLE_MAX - 1];
    // On boucle sur les adresses des éléments du tableau
    // On impime l'index si la valeur pointée est nulle
   for(int *ptr = iTableau; ptr <= &iTableau[TAILLE_MAX - 1];ptr++){
    if(*ptr == 0){
        printf("%ld ",ptr - iTableau);
    }
   }
    // --- FIN PARTIE A COMPLETER -------------------------------------------------
}
