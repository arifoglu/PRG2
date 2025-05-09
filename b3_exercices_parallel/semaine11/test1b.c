#include <stdio.h>

#define MYFILE "z1.txt"

int main() {
    FILE *fichier;
    fichier = fopen(MYFILE,"w");// "w" => yoksa olustur,varsa ecrasement.
    if(fichier == NULL){
        printf("Le fichier n'a pas cree!\n");
        return 1;
    }
    /*
    -> fputs(string,filename) satir sonu eklenmek zorunda => \n ,fputs() otomatik yapmiyor. 
    */
    fputs("HELLO from fputs\n",fichier);
    fputs("HALLO from fputs\n",fichier);

    fclose(fichier);

    return 0;
}