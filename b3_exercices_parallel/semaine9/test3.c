#include <stdio.h>
#include <string.h>

struct Personne{
    char nom[50];
    int age;
    float salaire;
};

// donus tipi struct olan bir fonksiyon, deger olarak struct aliyor.
struct Personne modify_personne(struct Personne pers){
    strcpy(pers.nom,"jon");
    pers.age = 23;
    pers.salaire = 3200.0;
    return pers;
};

// direkt pointer ile kullanma
void modify_personne2(struct Personne *pers){
    strcpy(pers->nom,"can");
    pers->age = 24;
    pers->salaire = 5200.0;
};

int main() {
    struct Personne pers = {"Bob",34,2130.0};

    printf("Avant : Nom : %s\n",pers.nom);
    pers = modify_personne(pers);
    printf("Apres : Nom : %s\n",pers.nom);

    // reference ile gonderim.
    printf("Avant : Nom : %s\n",pers.nom);
    modify_personne2(&pers);
    printf("Apres : Nom : %s\n",pers.nom);

    return 0;
}