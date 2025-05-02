#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Personne{
    char nom[50];
    int age;
    float salaire;
};

int main() {
    struct Personne *p3 = malloc(sizeof(struct Personne));

    if(p3 != NULL){
        strcpy(p3->nom, "jon");
    
    //p3 pointer oldugu icin kullanim sekli bu isaretle -> => p3->age, p3->salaire
        p3->age = 24;
    //   ya da pointer dereference edilecek. (*p3) => (*p3).age, (*p3).salaire
        (*p3).salaire = 2300.0;
    }else {
        printf("Failed to allocate memory for p3\n");
        return 1;
    }
    free(p3);
    struct Personne *p4 ;
    return 0;
}