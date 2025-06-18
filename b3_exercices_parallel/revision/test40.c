#include <stdio.h>

int main() {
    FILE *fsource, *fdest;
    fsource = fopen("sayi.dat","rb");
    if(fsource == NULL)return 1;
    fdest = fopen("pozitif.dat","wb");
    if(fdest == NULL)return 1;

    
   int i;
    // i nin adresine // her biri 4 byte (int)// 1 adet int oku // fsource dosyasından al
   while(fread(&i, sizeof(int), 1, fsource) == 1){
        if(i > 0){
    // i nin adresine // her biri 4 byte (int)// 1 adet int yaz // fdest dosyasına yaz
            fwrite(&i, sizeof(i), 1, fdest);
        }
   }

   fclose(fsource);
   fclose(fdest);

    
    return 0;
}