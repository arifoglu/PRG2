#include <stdio.h>

// *** TODO: counting functions
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
    int in_word = 0;

    while((c = fgetc(fp)) != EOF){
        if(c == ' ' || c == '\n' || c == '.' || c == ','){
            in_word = 0;
        }else if(in_word == 0){
            in_word = 1;
            count++;
        }
    }

    return count;
}

int countl(FILE *fp){
    int c = fgetc(fp);
    int count = 0;
    
    while((c = fgetc(fp)) != EOF){
        if(c == '\n'){
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
    fin = fopen(argv[1],"r");
    if(fin == NULL){
        printf("argv[1] n'as pas ouvert!\n");
        return 1;
    }

    // *** TODO: open file

    printf("%s contains %d characters\n", argv[1], countc(fin));

    rewind(fin);

    printf("%s contains %d mots\n", argv[1], countm(fin));

    rewind(fin);

    printf("%s contains %d line\n", argv[1], countl(fin));

    fclose(fin);
    return 0;
}