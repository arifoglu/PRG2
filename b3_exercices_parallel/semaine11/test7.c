#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[20];
    char prenom[20];
    float note1;
    float note2;
    float note3;
}eval_t;

int main(int argc , char **argv) {
    eval_t te1[3] = { 
        "Becile", "Alain", 1.8, 1.9, 2.0 , 
        "Hochon", "Paul", 3.5, 3.7 , 3.1 ,
        "Trichet", "Ella", 6.0, 6.0, 6.0
    };

    FILE *fp;

    //  "wb": Dosya yazma + binary modu
    fp = fopen("znotesbin.txt","wb");
    if(fp == NULL){
        printf("fp n'as pas ouvert\n");
        return 1;
    }
    // te1 dizisi 3 adet eval_t yapısı olarak dosyaya yazıyor.
    fwrite(te1, sizeof(eval_t), 3, fp);
    fclose(fp);

    // te1 içindeki tüm veriyi sıfırlar (0)
    memset(te1, 0, sizeof(eval_t) * 3);

    // "rb": Binary okuma modu
    fp = fopen("znotesbin.txt","rb");
    if(fp == NULL){
        printf("fp n'as pas ouvert\n");
        return 1;
    }

    // Dosyadan 3 tane eval_t yapısını tekrar te1 dizisine okur
    if( fread(te1, sizeof(te1[0]), 3, fp) == 3 ){
        for(int i = 0; i < 3; i++){
            printf("te[%d] = %s, %s" , i, te1[i].nom, te1[i].prenom);
            printf(", %.1f, %.1f, %.1f\n",te1[i].note1, te1[i].note2, te1[i].note3);
        }
    }
    fclose(fp);
    return 0;
}