#include <stdio.h>

int main() {
    /*
    -> w+ => yazma + okuma
    -> dosya yoksa olustur,dosya varsa icerik silinir(ecrasement)
    */
    FILE *fichier = fopen("z1.txt","w+");
    if(fichier == NULL){
        return 1;
    }

    fputs("Hello\n",fichier); // once yazdik
    
    rewind(fichier);// bas donduk okumak icin

    char buffer[100];
    while(fgets(buffer,sizeof(buffer),fichier) != NULL){
        printf("%s",buffer);
    }

    fclose(fichier);
    
    return 0;
}