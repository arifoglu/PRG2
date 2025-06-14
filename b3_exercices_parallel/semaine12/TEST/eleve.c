#include "eleve.h"

float moyenne_classe(const Eleve classe[],int nb_eleves){
    int moyenne = 0, somme = 0;

    for(int i = 0; i < nb_eleves;++i){
        somme += classe[i].note;
    }
    moyenne = somme / nb_eleves;

    return moyenne;
}

