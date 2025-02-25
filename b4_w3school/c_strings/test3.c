#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {
    // Concatenate => strcat()
    char str1[20] = "Hello ";// str1 should be large enough to concatenate two strings
    char str2[]   = "World!";
    
    strcat(str1,str2);
    printf("%s\n",str1);

    // Copy => strcpy()
    char str3[20] = "Hello World!";
    char str4[20];

    strcpy(str4,str3);
    printf("%s\n",str4);


    // Compare => strcmp()

    char str5[] = "hello";
    char str6[] = "hello";
    char str7[] = "Hello";
    printf("%d\n",strcmp(str5,str6)); // 0 => egal
    printf("%d\n",strcmp(str5,str7)); // 32=> not egal

    return EXIT_SUCCESS;
}