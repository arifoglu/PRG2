#include <stdio.h>
#include <string.h>

typedef enum{
    TEMPERATURE = 0, 
    HUMIDITE = 1, 
    OCCUPATION = 2
}TypeDeCapteur;

typedef union {
    float temperature;
    float humidite;
    int occupation;
}DonneesCapteur;

typedef struct{
    TypeDeCapteur capteur;
    DonneesCapteur donnee;

}Type;

void afficher(Type t){
    switch(t.capteur){
        case TEMPERATURE   : printf("Temperature   : %.2f°C\n",t.donnee.temperature);break;
        case HUMIDITE      : printf("Humidite      : %.2f%%\n",t.donnee.humidite);break;
        case OCCUPATION    : printf("Occupation    : %.d\n",t.donnee.occupation);break;
        default :printf("Type de capteur inconnu");
    }
}

int main() {
    Type t ;

    t.capteur = TEMPERATURE;
    t.donnee.temperature = 23.5;
    afficher(t);

    t.capteur = HUMIDITE;
    t.donnee.humidite = 45.2; 
    afficher(t);

    t.capteur = OCCUPATION;
    t.donnee.occupation = 3;
    afficher(t);

    return 0;
}