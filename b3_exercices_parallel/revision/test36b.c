#include <stdio.h>

int main() {
    /*
     => "r" => okuma modu,dosya yoksa hata mesaji alinir
     fgets(konulacak adres, konulacak adres boyutu, okuma yapilacak hedef)
     fgets(buffer         , sizeof(buffer)        ,  fichier             )
     while(fgets() != NULL) ile okundu ve ekrana yazdirildi   
    */
    FILE *fichier;
    fichier = fopen("z1.txt","r");
    if(fichier == NULL){
        return 1;
    }
    // rewind() yapmaya gerek yok, "r" modunda dosya bastan okunur.
    char buffer[100];
    while(fgets(buffer, sizeof(buffer),fichier) != NULL){
        printf("%s",buffer);
    }

    fclose(fichier);


    
    FILE *fichier2;
    fichier2 = fopen("z1.txt","r+");
     if(fichier2 == NULL){
        return 1;
    }

    rewind(fichier2);

    fprintf(fichier2,"this line is last one.");

    fclose(fichier2);


    
    return 0;
}