#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//
typedef struct __attribute__((packed)){
    uint16_t id;
    uint32_t timestamp;
    uint8_t  type;
    float value;
}SensorData;

void display(SensorData *data){
    printf("Identifiant du capteur : %u\n",data->id);
    printf("Horodotage             : %u\n",data->timestamp);
    printf("Type de capteur        : %u\n",data->type);
    printf("Valeur du capteur      : %.5f\n",data->value);
}


int main() {
    SensorData *sensordata = (SensorData *)malloc(sizeof(SensorData));
    if(!sensordata){
        perror("Allocation echoue");
        return EXIT_FAILURE;
    }

    sensordata->id = 12345;
    sensordata->timestamp = 161803398;
    sensordata->type = 2;
    sensordata->value = 3.14159f;

    display(sensordata);

    free(sensordata);

    return 0;
}