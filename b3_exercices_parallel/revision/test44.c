#include <stdio.h>
#include <stdbool.h>

int countc(FILE *fp){
    int count = 0;
    int c;
    while((c = fgetc(fp)) != EOF){
        count++;
    }
    return count;
}

int countm(FILE *fp){
    int count = 0;
    int c;
    int curw = false;
    while((c = fgetc(fp)) != EOF){
        if(c == ' ' || c == '\n'){
            curw = false;
        }else if(!curw){
            curw = true;
            count++;
        }
    }
    return count;
}


int countl(FILE *fp){
    int c = fgetc(fp);
    int count = (c != EOF);
    while((c = fgetc(fp)) != EOF){
        if( c == '\n'){
            count++;
        }
    }
    return count;
}


int main(int argc, char *argv[]) {
    if(argc != 2){
        return 1;
    }
    FILE *fichier;
    fichier = fopen(argv[1],"r");
    if(fichier == NULL)return 1;

    countc(fichier);
    return 0;
}