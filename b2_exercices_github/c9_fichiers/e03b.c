#include <stdio.h>

#define MAXLEN 100
#define MAX 20
struct stockItem {
    char brand[MAXLEN];
    char item[MAXLEN];
    int qty;
    float unit, total;
};

int main(int argc , char *argv[]) {
    if(argc != 2){
        printf("Usage %s file\n",argv[0]);
        return 1;
    }
    FILE *fsrc;
    fsrc = fopen(argv[1],"r");
    if(fsrc == NULL){
        printf("argv[1] n'as pas ouvert\n");
        return 1;
    }

    FILE *fdst;
    fdst = fopen("c.txt","wb");
    if(fdst == NULL){
        printf("fichier n'as pas ouvert\n");
        return 1;
    }

    struct stockItem s[MAX];
    int i = 0;
    while(fscanf(fsrc, "%s %s %d %f %f",s[i].brand, s[i].item, &s[i].qty, &s[i].unit, &s[i].total) != EOF){
        fwrite(&s[i], sizeof(struct stockItem), 1, fdst);
    }

    fclose(fsrc);

    fclose(fdst);
    return 0;
}