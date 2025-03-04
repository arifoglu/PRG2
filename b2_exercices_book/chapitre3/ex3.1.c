/*
Sachant que le premier avril 2004 était un jeudi, écrire un programme quidétermine le jour de la semaine correspondant au 4 mai de la même année. On pourrareprésenter les jours de la semaine par des numéros allant de 0 à 6
*/
#include <stdio.h>

int main(){
    /*
    0 => dimanche ...  6 => samedi
    33 jours entre 1er avril et le 4 mai
    */
    
    int njours;
    int jours_entre = 33;
    int jour_1avril = 4;
    njours = (jour_1avril + jours_entre) % 7;
    printf("Le 4 mai et %d ème jour de la semaine\n",njours);
    return 0;
}