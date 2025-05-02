#include <stdio.h>
#include <string.h>

// struct

struct Personne{
    char nom[50];
    int age;
    float salaire;
};

//typedef struct

typedef struct{
    char nom[50];
    int age;
    float salaire;
}Personne2;// struct ismi buraya yazilacak.

int main() {
    // Decalaration 
    struct Personne p1;
    /* 
    struct icin string e atama yapmak icn =>strcpy kullanmak zorunlu.
    p1.nom = "sed" => bu gecersiz bir kullanim
    */
    strcpy(p1.nom,"sed");

    p1.age = 12;
    p1.salaire = 3200.0;
    printf("name : %s age :  %d, salaire : %.1f\n",p1.nom,p1.age,p1.salaire);

    ////////////////////
    // ilk basta direk tanimlanabilir string ve diger variables.
    // Declaration ve initialisation
    struct Personne p2 = { "fes", 23, 3400.0};
    printf("name : %s age :  %d, salaire : %.1f\n",p2.nom,p2.age,p2.salaire);

    //////////////////
    Personne2 per2;
    strcpy(per2.nom,"fed");
    per2.age = 32;
    per2.salaire = 2300.0;
    printf("name : %s age :  %d, salaire : %.1f\n",per2.nom, per2.age, per2.salaire);


    return 0;
}