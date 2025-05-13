#include <stdio.h>


int main() {
    int i;
    FILE *file = fopen("zinput2.txt", "w+b");
    if (file == NULL) {
        printf("Dosya acilamadi\n");
        return 1;
    }
    
    // sailari yazar
    for (i = 1; i <= 23; i++) {
        fwrite(&i, sizeof(int), 1, file);
    }

    // index 5  okumak için 5 * sizeof(int) kadar ileri git
    fseek(file, 5 * sizeof(int), SEEK_SET);
    
    // 1 adet int oku ve i değişkenine yaz
    if (fread(&i, sizeof(int), 1, file) == 1) {
        printf("6. eleman = %d\n", i);
    } else {
        printf("Veri okunamadi\n");
    }
    
    fclose(file);
    
    return 0;
}