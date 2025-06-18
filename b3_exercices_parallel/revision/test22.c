#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define ALLUME '*'
#define ETEINT '-'
#define CLIGNOTEMENT 20

void afficher(unsigned char leds){
    printf("\r");
    for(int i = 7; i >= 0;--i){
        if(leds & (1 << i)){
            printf("%c",ALLUME);
        }else {
            printf("%c",ETEINT);
        }
    }
    fflush(stdout);
}

int main() {
    srand(time(NULL));

    unsigned char leds = 0xAA;
    for(int i = 0; i <CLIGNOTEMENT;++i){
        afficher(leds);
        leds = ~leds;

        float delai = (rand() % 900 + 100) / 1000.0; // Génère un délai aléatoire entre 0.1 et 1 seconde

        usleep(delai * 1000000); // Attend le délai aléatoire
    }
    printf("\n");
    return 0;
}
