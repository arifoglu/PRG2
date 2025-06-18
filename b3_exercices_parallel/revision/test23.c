#include <stdio.h>

#define LIRE     0x01
#define ECRIRE   0x02
#define EXECUTER 0x04

#define USERS {"proprieitaire", "groupe", "autree"};

int main() {
    u_int16_t droit_acces = 0x00;
    char *users[] = USERS;

    printf("Entrer un nombre entre 0 et 511 pour coder un accès Linux:");
    if(scanf("%d",&droit_acces) != 1 || droit_acces < 0 || droit_acces > 511){
        printf("Valeur impossible\n");
        return 1;
    }

    int proprietaire = (droit_acces >> 6) & 0x07;
    int groupe       = (droit_acces >> 3) & 0x07;
    int autre        = droit_acces & 0x07;

    if(proprietaire & LIRE){
        printf("lire");
    }
    if(proprietaire & ECRIRE){
        printf("ecrire");
    }
    if(proprietaire & EXECUTER){
        printf("executer");
    }

    return 0;
}
