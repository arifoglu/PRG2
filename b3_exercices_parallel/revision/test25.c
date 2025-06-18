#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nom[50];
    int age;
}Personne;

Personne modify_personne(Personne pers){
    strcpy(pers.nom, "CAN");
    pers.age += 2;
    return pers; 
}

void modify_personne2(Personne *pers){
    strcpy(pers->nom, "DAN");
    pers->age += 2; 
}


int main() {
    Personne pers = {"ali",24};

    printf("Avant : Nom : %s\n",pers.nom);
    pers = modify_personne(pers);
    printf("Apres : Nom : %s\n",pers.nom);

    // 
    printf("Avant : Nom : %s\n",pers.nom);
    modify_personne2(&pers);
    printf("Apres : Nom : %s\n",pers.nom);

    return 0;
}
