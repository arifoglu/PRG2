#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int somme = 0;
    for(int i = 1; i < argc;++i){
        int num = atoi(argv[i]);
        somme += num;
    }
    printf("somme : %d\n",somme);

    return 0;
}