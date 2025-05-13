#include <stdio.h>

/*
 => "r" => okuma modu,dosya yoksa hata mesaji alinir
 fgets(konulacak adres, konulacak adres boyutu, okuma yapilacak hedef)
 fgets(buffer         , sizeof(buffer)        ,  fichier             )
 while(fgets() != NULL) ile okundu ve ekrana yazdirildi   
*/
int main() {
    FILE *fichier;
    fichier = fopen("z1.txt","r");
    if(fichier == NULL){
        printf("fichier n'a pas ouvert!\n");
        return 1;
    }
    // rewind() yapmaya gerek yok, "r" modunda dosya bastan okunur.
    char buffer[100];
    while(fgets(buffer, sizeof(buffer), fichier) != NULL){
        printf("Okunan satir : %s",buffer);
    }
    fclose(fichier);
    return 0;
}