#include "personne.h"

Personne creer_personne(const char *nom, int age){
    Personne p;
    strcpy(p.nom,nom);
    p.age = age;
    return p;
}
