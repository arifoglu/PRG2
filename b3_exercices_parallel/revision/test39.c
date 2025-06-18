#include <stdio.h>

#define MAX 100

int main(int argc, char **argv) {
    FILE *fin, *fout;

    fin = fopen(argv[1],"r");
    if(fin == NULL){
        printf("fichier n'as pas ouvert!\n");
        return 1;
    }
    fout = fopen("zm.txt","w");
    if(fout == NULL){
        printf("fichier n'as pas ouvert!\n");
        return 1;
    }

    // baslikari tutmak icin arrays
    char row[MAX], col1[MAX], col2[MAX];
    // notlari tutmak icin variables
    float mrk1, mrk2, mrk3;

    /*
    fscanf() => bosluk veya tab otomatik atlar.
    %s => ilk kelimeyi alir(ilk bosluk veya taba kadar), %s 2.kelimeyi alir
    %f => ilk sayiyi alir,%f 2.sayiyi alir ,%f 3.sayiyi alir.
    %*s=> okur ama degeri saklamaz(atla demektir)
    
    //
    %s %s ile ilk 2 colon okundu.=> col1 -> NOM, col2 -> PRENOM 
    */
    if(fscanf(fin, "%s %s %*s %*s %*s", col1, col2) != 2){
        fprintf(stderr, "[e] could not get title row\n");
        ferror(fin);
    }

    /*
    col1 -> NOM, col2 -> PRENOM ve MOYENNE fout dosyasina yazildi. 
    */ 
    fprintf(fout, "%s %s MOYENNE\n", col1, col2);

    /*
    %s  %s      %f    %f    %f   ", col1, col2, &mrk1, &mrk2, &mrk3
    NOM PRENOM  NOTE1 NOTE2 NOTE3 => eslesme bu sekilde okuma yapildi. 
    */
    while(fscanf(fin, "%s %s %f %f %f", col1, col2, &mrk1, &mrk2, &mrk3) == 5){
    //             NOM PRENOM MOYENNE  seklinde dosyaya yazildi. 
        fprintf(fout,"%s, %s, %.2f\n",col1, col2, (mrk1 + mrk2 + mrk3) / 3);
    }

    fclose(fin);
    fclose(fout);

    return 0;
}