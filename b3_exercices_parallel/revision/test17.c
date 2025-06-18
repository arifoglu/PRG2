#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool palindrome(char str[]){
    size_t len = 0;

    while(str[len] != '\0'){
        len++;
    }

    for(size_t i = 0; i < len;++i){
        if(str[i] != str[len - 1 -i]){
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    int i;
    printf("Saisir un mot");
    scanf("%99s",str);

    for(size_t i = 0; i < 99;++i){
        str[i] = toupper(str[i]);
    }

    palindrome(str);

    return 0;
}

