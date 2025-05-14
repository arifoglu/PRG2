#include <stdio.h>

// *** TODO: counting functions
int countc(FILE *fp){
    int count = 0;
    int c ;
    while((c = fgetc(fp)) != EOF){
        count++;
    }
    return count;
}

int countm(FILE *fp){
    int count = 0;
    char mot[100];
    while(fscanf(fp,  "%s" , mot) == 1){
        count++;
    }
    return count;
}

int countdot(FILE *fp){
    int count = 0;
    int c;
    while((c = fgetc(fp)) != EOF){
        if(c == '.'){
            count++;
        }
    }
    return count;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s file\n", argv[0]);
        return 1;
    }

	FILE *fin;

    // *** TODO: open file
    fin = fopen(argv[1],"r");
    if(fin == NULL){
        printf("file argv[1] n'as pas ouvert!\n");
        return 1;
    }
    
    printf("%s contains %d characters\n", argv[1], countc(fin));

    rewind(fin);

    printf("%s contains %d mots\n", argv[1], countm(fin));

    rewind(fin);

    printf("%s contains %d dots\n", argv[1], countdot(fin));

    fclose(fin);
    return 0;
}