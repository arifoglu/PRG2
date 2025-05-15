#include <stdio.h>

int main(){
    //Kullanıcıdan bir kelime al (boşluksuz) ve ekrana yazdır. Dizi boyutu = 20 karakter
    char str1[20];
    printf("input:");
    scanf("%19s",str1);
    printf("output:%s\n",str1);
    while(getchar() != '\n');

    // Kullanıcıdan bir cümle al, yani boşluk içeren bir input olsun.Dizi boyutu= 20 karakter
    /*
    char str2[20];
    printf("input:");
    fgets(str2,sizeof(str2),stdin);
    printf("output:%s\n",str2);
    while(getchar() != '\n');
    */

    // Kullanıcıdan bir cümle al (boşluk içerebilir),ama sadece ilk 10 karakterini yazdır
    char str3[11];
    printf("input:");
    scanf("%10s",str3);
    printf("output:%s\n",str3);
    while(getchar() != '\n');

    //Kullanıcıdan iki kelime al ve bunları ayrı ayrı değişkenlere kaydedip yazdır.
    char str4[20], str5[20];
    printf("input:");
    scanf("%s %s", str4, str5);
    printf("output : %s %s\n", str4, str5);
    while(getchar() != '\n');

    // Kullanıcıdan boşluk içeren bir cümle al ve tümünü ekrana yazdır.
    char str6[50];
    printf("input:");
    fgets(str6,sizeof(str6),stdin);
    printf("output : %s\n",str6);
    return 0;
}