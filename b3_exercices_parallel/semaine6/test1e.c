#include <stdio.h>

int main(){
    // jour(array) => 7 (pointer) ,her pointer bir string tutar
    char *jour[7] = { "lundi", "mardi", "mercredi", "jeudi","vendredi", "samedi" ,"dimanche" } ;
    int i;

    printf ("donnez un entier entre 1 et 7 : ") ;
    scanf("%d",&i);
    printf ("le jour numéro %d de la semaine est %s\n", i, jour[i-1] ) ;

    return 0;
}