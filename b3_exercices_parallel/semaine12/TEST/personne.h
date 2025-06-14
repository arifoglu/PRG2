#ifndef PERSONNE_H
#define PERSONNE_H

#include <string.h>

typedef struct {
    char nom[50];
    int age;
}Personne;

Personne creer_personne(const char *nom, int age);

#endif