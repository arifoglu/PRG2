#include <stdio.h>

#define LIRE     0x01
#define ECRIRE   0x02
#define EXECUTER 0x04

int main() {
    unsigned char acces = 0x00;

    acces |= LIRE | ECRIRE;
    printf("après modification : 0x%X\n",acces);

    if(acces & LIRE)     printf("Lire accordé\n");
    if(acces & ECRIRE)   printf("Ecrire accordé\n");
    if(acces & EXECUTER) printf("Executer accordé\n");

    return 0;
}