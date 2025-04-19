
#include <stdio.h>
#include <string.h>

int moreTxt(char *list) {
    char str[5];  // <-- tiny sized array

    printf("> Ajouter un mot (exit = '0'): ");
    scanf("%s", str); // <-- unlimited input!!!

    if (str[0] == '0') return 0; // <-- 0 = stop
    printf("- Je note %s!\n", str);

    if (strlen(list) > 0) strcat(list, ",");
    strcat(list, str); // <-- unlimited extension!!!
    printf(". La liste contient maintenant: %s\n", list);
    return 1; // <-- 1 = continue
}

void overW(const char *src, char *dst) {
    int i;

    for (i = 0; src[i] != '\0'; i++) dst[i] = src[i];
    dst[i] = '\0';
}

void overR(const char *src, int len) {
    int i;

    for (int i = 0; i < len; i++) printf("%c", src[i]);
    printf("\n");
}

int testOverRW() {
    // arrays below are restricted-size buffers
    char sec4[20] = "C3C1 3ST UN S3CR3T";
    char sec3[20] = "CECI EST UN SECRET";
    char outs[20] = { 0 };
    char sec2[20] = "ceci est un secret";
    char inps[40] = "phrase par defaut";
    char sec1[20] = "ceci est un secret";
    int inpl = 0;

    while (1) {
        fflush(stdin); // <-- needed to flush previous inputs
        printf("! phrase actuelle = '%s'\n", inps);
        printf("> voulez-vous la changer (no = '1', exit = '0')? ");
        scanf("%d", &inpl); // <-- integer input
        if (inpl == 0) return 0; // <-- 0 = stop
        if (inpl != 1) {
            printf("> Saisir une phrase a copier: ");
            fflush(stdin); // <-- again, need to flush inputs
            fgets(inps, sizeof inps, stdin); // <-- limited input!!!
            inps[strlen(inps) - 1] = '\0';   // <-- remove '\n'
        }
        printf(". La chaine a lire fait %lu caracteres\n", strlen(inps));
        printf(". La chaine a ecrire attend %lu caracteres\n", (sizeof outs / sizeof * outs) - 1);

        overW(inps, outs);  // <-- test overwrite
        printf(". La chaine ecrite contient: %s\n", outs);

        printf("> Saisis le nombre de lettres a afficher (exit = '0'): ");
        scanf("%d", &inpl);  // <-- integer input
        if (inpl == 0) return 0; // <-- 0 = stop

        overR(inps, inpl); // <-- test overread
    }
    return 1; // <-- 1 = continue
}

int main(void) {
    char str[16] = { 0 };  // <-- short sized array

    while (moreTxt(str));
    printf("La liste finale contient: %s\n---\n\n", str);

    while (testOverRW());
    printf("Done!\n---\n\n");

    return 0;
}
