#include <stdio.h>

/*
=> "a" => sadece yazmak icin acar,dosya yoksa olusturur,dosya varsa mevcut
icerigin sonuna ekleme yapar
=> fputs(), fprintf() ile dosya icerigine ekleme yapilabilir. 
*/

int main() {
    FILE *fichier;
    fichier = fopen("z1.txt","a");
    if(fichier == NULL){
        printf("fichier n'a pas ouvert!\n");
        return 1;
    }
    // fputs(string,hedef) => ile istedigimiz satiri dosya sonuna ekleme yapiyoruz.
    fputs("bu satir dosyanin sonuna eklenecek!\n",fichier);
    
    // fprintf(hedef,string)=> ile istedigimiz satiri dosya sonuna ekleme yapiyoruz.
    fprintf(fichier,"this line will be added end of file\n");

    // fputc(caracter,hedef) ile sadece bir caracter konur
    fputc('Z',fichier);

    fclose(fichier);
    return 0;
}