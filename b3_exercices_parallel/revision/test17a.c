#include <stdio.h>
#include <stdbool.h>

bool parantheses_balanced(char str[]){
    size_t len = 0;
    while(str[len] != '\0')len++;

    int n = 0;
    for(size_t i = 0; str[i] != '\0';++i){
        if(str[i] == '(')++n;
        else if(str[i] == ')')--n;
        if(n < 0) return false;
    }

    return n == 0;
}

int main() {
    char str[100];
    parantheses_balanced(str);

    return 0;
}
