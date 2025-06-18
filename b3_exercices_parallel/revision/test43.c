#include <stdio.h>


int main(int argc , char **argv) {
    FILE *file;
    file = fopen("arraybin.dat","w+b");
    if(file == NULL) return 1; 

    // j nin adresine binary olarak yazdik
    int i, j;
    for(int i = 0; i < 100;++i){
        j = i * 10;
        fwrite(&j, sizeof(int), 1, file);
    }

    // basa dondu
    rewind(file);

    // mevcut pozisyon
    fseek(file,0,SEEK_CUR);

    // 120.inci byte gider
    fseek(file, 120, SEEK_SET);

    return 0;
}