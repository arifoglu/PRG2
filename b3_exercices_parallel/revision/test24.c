#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nom[50];
    char *adres;
    int age;
}Personne;

int main() {
    Personne p1;
    p1.age = 23;
    //struct ta string e atama yapmak icn =>strcpy kullanmak zorunlu.
    strcpy(p1.nom,"ali");
    printf("%d %s\n",p1.age,p1.nom);

    // Declaration ve initialisation
    Personne p2 = {"alim",24};
    printf("%d %s\n",p2.age,p2.nom);


    // Dynamic allocation 1( struct allocation)
    Personne *p3 = malloc(sizeof(Personne));
    if(p3 != NULL){
        strcpy(p3->nom,"salim");// pointer oldugundan -> kullanmak zorunlu 
        p3->age = 24;
    }
    free(p3);

    // Dynamic allocation 2 (element allocation)
    Personne p4;
    p4.adres = malloc(sizeof(20));
    if(p4.adres != NULL){
        strcpy(p4.adres,"Street A");
    }
    free(p4.adres);


    // 

    return 0;
}
