#include <stdio.h>
#include <string.h>

typedef struct{
    char nom[20];
    char prenom[20];
    float note1;
    float note2;
    float note3;
}eval_t;

int main() {
    // te1 icin veriler
    eval_t te1[3] = { 
        {"Becile", "Alain", 1.8, 1.9, 2.0},
        {"Hochon", "Paul", 3.5, 3.7, 3.1},
        {"Trichet", "Ella", 6.0, 6.0, 6.0}
    };

    FILE *fdst;
    fdst = fopen("znotesbin","wb");
    if(fdst == NULL){
        printf("Error!\n");
        return 1;
    }
    // verileri dosyaya yazdik
    fwrite(te1, sizeof(eval_t), 3, fdst);

    if(fread(te1, sizeof(te1[0]), 3, fdst) == 3){
        for(int i = 0 ; i< 3;++i){
            printf("te[%d] = %s %s",i, te1[i].nom, te1[i].prenom);
            printf("%.1f %.1f %.1f\n",te1[i].note1, te1[i].note2, te1[i].note3);
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("te[%d] = %s, %s", i, te1[i].nom, te1[i].prenom);
        printf(", %.1f, %.1f, %.1f\n", te1[i].note1, te1[i].note2, te1[i].note3);
    }
    

    fclose(fdst);

    return 0;
}