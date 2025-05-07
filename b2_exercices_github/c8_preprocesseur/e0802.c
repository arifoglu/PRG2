#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Définition des macros */
#define CHIFFRE(c)   ( ((c) >= '0') && ((c) <= '9') )
#define MINUSCULE(c) ( ((c) >= 'a') && ((c) <= 'z') )
#define MAJUSCULE(c) ( ((c) >= 'A') && ((c) <= 'Z') )
#define MIN_MAJ(c)   ((c >= 'a' && c <= 'z') ? toupper(c) : (c))
#define MAJ_MIN(c)   ((c >= 'A' && c <= 'Z') ? tolower(c) : (c))
#define PERMUTE(a,b)   \
do{                    \
        int temp = a;  \
        a = b;         \
        b = temp;      \
}while(0)

#define COPIE(s,t) strcpy(s,t)

/* A compléter */

int main() {

    char test_char = '5';
    char test_min_char = 'a';
    char test_maj_char = 'Z';
    int a = 10, b = 20;
    char lower_char = 't';
    char upper_char = 'K';
    char source[] = "Hello, world!";
    char destination[50];

    
    /* Teste si <test_char> est un chiffre */
    printf("Est-ce un chiffre ? %d\n",CHIFFRE(test_char));
        
    /* Teste si <test_min_char> est une minuscule */
    printf("Est-ce une minuscule ? %d\n",MINUSCULE(test_min_char));

    /* Teste si <test_maj_char> est une majuscule */
    printf("Est-ce une majuscule ? %d\n",MAJUSCULE(test_maj_char));


    /* Converti <lower_char> en majuscule SI minuscule */
    printf("En majuscule si minuscule : %c\n", MIN_MAJ(lower_char));

    /* Converti <upper_char> en minuscule SI majuscule */
    printf("En minuscule si majuscule : %c\n", MAJ_MIN(upper_char));
       

    printf("Avant permutation : a = %d, b = %d\n", a, b);

    /* A compléter */
    PERMUTE(a,b);
    
    printf("Après permutation : a = %d, b = %d\n", a, b);
    

    /* Effectue une copie de destination dans source avec la macro COPIE */

    /* A compléter */
    COPIE(destination,source);
    printf("Chaîne copiée : %s\n", destination);


    return 0;
}
