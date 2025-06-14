#ifndef ELEVE_H
#define ELEVE_H

typedef struct {
    char nom[];
    int note;
}Eleve;

float moyenne_classe(const Eleve classe[],int nb_eleves);

#endif