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
    // Bu diziyi "eval.dat" adlı bir binary dosyaya yaz

    FILE *fichier;
    fichier = fopen("eval.dat","wb");
    if(fichier == NULL)return;

    // yazma islemi
    fwrite(te1, sizeof(eval_t),3, fichier);

    // dosyadaki index 1 deki ogrencinin notlarini okuma
    FILE *fichier2;
    fichier2 = fopen("eval.dat","rb");
    if(fichier2 == NULL)return;
    
    fseek(fichier2, sizeof(eval_t) * 1, SEEK_SET);
    if(fread(&te1[1], sizeof(eval_t),1,fichier2)){
        printf("%s %s",te1[1].nom, te1[1].prenom);
        printf("%.f %.f %.f",te1[1].note1, te1[1].note2, te1[1].note3);
    }

    fclose(fichier);
    fclose(fichier2);

    return 0;
}