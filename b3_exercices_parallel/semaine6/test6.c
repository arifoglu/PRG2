#include <stdio.h>

int main(){
    // son caracter '\0' 
    char str[6];
    str[0] = 's';
    str[1] = 'a';
    str[2] = 'l';
    str[3] = 'u';
    str[4] = 't';
    str[5] = '\0';
    printf("%s\n",str);

    //str[i] == *(str + i) => EX: str[3] == *(str+3);
    printf("str[3] : %c\n",str[3]);
    printf("str[3] : %c\n",*(str + 3));

    // str == &str[0]
    printf("str : %p\n",str);
    printf("str : %p\n",&str[0]);

    return 0;
}