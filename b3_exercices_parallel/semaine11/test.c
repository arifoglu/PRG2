#include <stdio.h>

#define BLOCK 100

int main() {
    FILE *fsrc, * fdst;
    fsrc = fopen("a.txt","rb");
    
    if(fsrc == NULL){
        printf("Error\n");
        return 1;
    }
    
    fdst = fopen("b.txt","wb");

    if(fdst == NULL){
        printf("Error\n");
        return 1;
    }
    
    char str[BLOCK];
    int len;
    while((len = fread(str,1, BLOCK, fsrc)) > 0){
        fwrite(str,1,len,fdst);
    }

    fclose(fsrc);
    fclose(fdst);

    return 0;
}