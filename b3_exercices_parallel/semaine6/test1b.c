#include <stdio.h>

int main(){
    // scanf()
    char str[10];
    printf("input  : ");
    scanf("%s",str);
    printf("output : %s\n",str);
    while(getchar() != '\n');
    
    // scanf(%Ns) belirli sayida karakter okuma
    char str2[10];
    printf("input : ");
    scanf("%9s",str2);
    printf("output:%s\n",str2);
    while(getchar() != '\n');

    // scanf()  coklu string alma
    char str3[5], str4[5];
    printf("input : ");
    scanf("%s %s",str3, str4);
    printf("output : %s %s\n",str3, str4);
    while(getchar() != '\n');

    // fgets()
    char str5[15];
    printf("input : ");
    fgets(str5,15,stdin);
    printf("output : %s\n",str5);


    return 0;
}