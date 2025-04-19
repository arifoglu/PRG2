#include <stdio.h>
#include <stdint.h>

// Définition des masques pour chaque droit d'accès
#define LIRE 0x01      //  0b00000001   
#define ECRIRE 0x02    //  0b00000010
#define EXECUTER 0x04  //  0b00000100   

#define USERS { "proprietaire", "groupe", "autres" }

int main() {
    // permissions
    uint16_t droitsAcces = 0x00;
    char *users[] = USERS;

    // L'utilisateur entre un droit d'accès
    printf("Entrer un nombre entre 0 et 511 pour coder un accès Linux: ");
    if ((scanf("%hd", &droitsAcces) != 1) || (droitsAcces > 511)) {
        printf("Désolé, valeur impossible\n");
        return 1;
    };
    

    printf("Droits d'accès après modification: 0x%X\n", droitsAcces);

    // Vérification des droits

    // A COMPLETER
    /*
    - ilgili bitleri almak icin >> kaydirma yapiyoruz.
    - sonra bu mask uyguluyoruz ilk 3 bit icin => 0x07 => 00000111 
    */
     // proprietaire(bit 7 à 9)
    int proprietaire = (droitsAcces >> 6) & 0x07;
    // groupe(bit 4 à 6)
    int groupe = (droitsAcces >> 3) & 0x07;
    // autre(bit 1 à 3)
    int autre = droitsAcces & 0x07;

    printf("Proprietaire = ");
    if(proprietaire & LIRE){
        printf("r");
    }else{
        printf("-");
    }
    if(proprietaire & ECRIRE){
        printf("w");
    }else{
        printf("-");
    }
    if(proprietaire & EXECUTER){
        printf("x");
    }else{
        printf("-");
    }
    printf("\n");
    // Groupe
    printf("Groupe = ");
    if(groupe & LIRE){
        printf("r");
    }else{
        printf("-");
    }
    if(groupe & ECRIRE){
        printf("w");
    }else{
        printf("-");
    }
    if(groupe & EXECUTER){
        printf("x");
    }else{
        printf("-");
    }

    printf("\n");

    // autre
    printf("autre = ");
    if(autre & LIRE){
        printf("r");
    }else{
        printf("-");
    }
    if(autre & ECRIRE){
        printf("w");
    }else{
        printf("-");
    }
    if(autre & EXECUTER){
        printf("x");
    }else{
        printf("-");
    }
    printf("\n");

    return 0;
}
