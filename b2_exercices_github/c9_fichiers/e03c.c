#include <stdio.h>

#define MAX 20
#define MAXLEN 100

struct stockItem {
    char brand[MAXLEN];
    char item[MAXLEN];
    int qty;
    float unit, total;
};

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Usage %s file\n",argv[0]);
        return 1;
    }

    FILE *fsrc;
    fsrc = fopen(argv[1],"rb");
    if(fsrc == NULL){
        printf("Le fichier n'as pas ouvert!\n");
        return 1;
    }

    // LOAD DB into memory
    struct stockItem s[MAX];
    int n = 0;

    // get db size
    // n değişkeni belleğe yüklenir, bu n kadar struct okunacak demektir.
    if(fread(&n, sizeof n, 1, fsrc) != 1){
        printf("Error trying to read db size \n");
        return 1;
    }

    // get db rows
    if(fread(s,sizeof(s[0]),n,fsrc) != n){
        printf("Error trying to read %d db contents \n",n);
        return 1;
    } 

    printf("[i] The stock contains %d products:\n", n);

    for(int i = 0; i < n ;i++){
        printf("[i] - row %d: ", i);
        printf("[%s] [%s]",s[i].brand,s[i].item);
        printf("[%.2f] [%d] [%.2f]",s[i].unit, s[i].qty, s[i].total);
    }
   

    fclose(fsrc);

    return 0;
}
