#include <stdio.h>

int main(int argc,char *argv[]){
    // argv[0] => her zaman programin adi,yolu.=> ./a.out veya ./project gibi
    // argv[1],argv[2]=> kullanici argumanlari

    printf("Total %d argument.\n",argc);// ./a.out 12 23    => Total 3 argument.


    for(int i = 0; i < argc;++i){
        printf("arg[%d] : %s\n",i,argv[i]);
    }
    /*
    arg[0] = ./a.out
    arg[1] = a
    arg[2] = 2
    */
    return 0;
}