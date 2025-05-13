#include <stdio.h>


int main() {
    FILE *file;
    int i, j;

    file = fopen("zarraybin.txt","w+b");
    if(file == NULL){
        printf("file n'as pas ouvert\n");
        return 1;
    }

    for(int i = 0; i < 100 ; i++){
        j = i * 10;
        fwrite(&j, sizeof(int), 1, file);
    }
    /*
    fseek() -> dosya içindeki imleci değiştirmeye yarar.
        SEEK_SET → dosya başı
        SEEK_CUR → şu anki pozisyon
        SEEK_END → dosya sonu
    */

    fseek(file, 0, SEEK_CUR);
    printf("Position %ld\n",ftell(file));// mevcut konumu yazar ftell(file)

    /*
    rewind() dosya imlecini başlangıca getirir.
    Aynisi => fseek(file, 0, SEEK_SET)
    */
    rewind(file);

    // 1.
    fseek(file, 0, SEEK_CUR);
    // ftell(file)  şu anki dosya pozisyonunu verir.
    printf("Position %ld\n",ftell(file));
   
    // 2.
    fseek(file, 120, SEEK_SET);// 120. byte'a gider.
    printf("Position %ld\n",ftell(file));// mevcut konumu yazar ftell(file)

    fread(&i,sizeof(i), 1 , file);//120. byte’tan itibaren 1 adet int okunur ve i değişkenine yazılır.
    printf("\t i = %d\n",i);

    fclose(file);
    return 0;
}