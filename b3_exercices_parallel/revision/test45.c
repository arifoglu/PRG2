#include <stdio.h>

int main(int argc, char *argv[]) {
    if( argc != 2){
        return 1;
    }

    FILE *fichier;
    fichier = fopen(argv[1],"r");
    if(fichier == NULL)return 1;

    char brand[100];
    char item[100];
    float unit, total;
    int qty;

    while(fscanf(fichier,"%s %s %f %d %f",brand, item, &unit, &qty, &total) != EOF){
        printf("importing %s, %s, %.1f, %d, %.1f\n",brand, item, unit, qty, total);
    }

    fclose(fichier);

    return 0;
}