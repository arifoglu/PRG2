#include <stdio.h>

int main(int argc, char **argv){
    if(argc != 2){
        printf("Usage %s file\n",argv[0]);
        return 1;
    }

    FILE *fsrc;
    fsrc = fopen(argv[1],"r");
    if(fsrc == NULL){
        printf("Error\n");
        return 1;
    }

    char marque[50];
    char designation[50];
    float prixunit, prixtotal;
    int stock;
    while(fscanf(fsrc, "%s %s %f %d %f", marque, designation, &prixunit, &stock, &prixtotal) == 5){
        printf("Importing %s, %s, %.1f, %d, %.1f\n", marque, designation, prixunit, stock, prixtotal);
    }

    fclose(fsrc);

    return 0;
}