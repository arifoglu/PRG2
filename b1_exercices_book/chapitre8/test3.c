#include <stdio.h>
#include <string.h>

int main() {
    char text[50];

    printf("Text : ");
    fgets(text,sizeof(text),stdin);

    text[strcspn(text,"\n")] = '\0';

    if(strlen(text) > 30){
        printf("text is too big\n");
        return 1;
    }

    size_t len = strlen(text);
    printf("inverse : ");
    for(int i = len - 1;i >= 0;i--){
        printf("%c",text[i]);
    }
    printf("\n");

    return 0;
}