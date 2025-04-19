#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void palindrome(const char* str);

bool palindrome2(char *str);

int main() {
    char str[20];
    printf("text : ");
    scanf("%s",str);

    palindrome(str);

    // palindrome2(str);
    if(palindrome2(str)){
        printf("%s est palindrome(v2)\n",str);
    }else{
        printf("%s n'est pas palindrome(v2)\n",str);
    }

    return 0;
}

// version 1
void palindrome(const char* str){
    if(strlen(str) <= 2 ){
        printf("text doit être plus long!!\n");
        printf("Sortie : %s",str);
    }else{
        int is_palindrome = 1;
        size_t len = strlen(str);

        for(size_t i = 0; i < len / 2 ;++i){
            if(str[i] != str[len - i - 1]){
                is_palindrome = 0;
                break;
            }            
        }
        if(is_palindrome){
            printf("%s est palindrome(v1)\n", str);
        } else {
            printf("%s n'est pas palindrome(v1)\n", str);
        }

        }
}

// version 2
bool palindrome2(char *str){
    size_t len = 0;
    // calcul size
    while(str[len] != '\0') len++;

    for(size_t i = 0; i< len ;++i){
        if(str[i] != str[len - 1 - i]){
            return false;
        }
    }
    return true;
}
