#include <stdio.h>

#define MAXLEN 100
#define MAXSTOCK 100

typedef struct {
    char brand[MAXLEN];
    char item[MAXLEN];
    int qty;
    float unit, total;
}stockItem;

int main(int argc, char *argv[]) {
    if( argc != 3){
        return 1;
    }

    FILE *fichier;
    fichier = fopen(argv[1],"r");
    if(fichier == NULL)return 1;

    // okuma faaliyeti
    stockItem stock[MAXSTOCK] = {0};
    int i =0;

    while(fscanf(fichier, "%s %s %f %d %f",stock[i].brand, stock[i].item, &(stock[i].unit), &(stock[i].qty), &(stock[i].total)) != EOF){
        printf("importing %s %s %.1f %d %.1f\n",stock[i].brand, stock[i].item, stock[i].unit, stock[i].qty, stock[i].total);
        i++;
    }

    // database yazma

    FILE *fdest;
    fdest = fopen(argv[2],"wb");
    if(fdest == NULL)return 1;

    // header
    fwrite(&i, sizeof(int), 1, fdest);
    // rows
    fwrite(stock, sizeof(stock[0]), 1, fdest);


    // database okuma
    FILE *fdest2;
    fdest2 = fopen(argv[2],"rb");
    if(fdest2 == NULL)return 1;

    fread(&i, sizeof(stock[0]),1, fdest2);
    fread(stock, sizeof(stock[0]), 1, fdest2);
    for (int j = 0; j < i; j++) {
        printf("[i] - row %d: ", j);
        printf("[%s],[%s],", stock[j].brand, stock[j].item);
        printf("[%.2f],[%d],[%.2f]\n", stock[j].unit, stock[j].qty, stock[j].total);
    }

    fclose(fichier);
    fclose(fdest);

    return 0;
}