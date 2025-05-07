#include <stdio.h>

/*
Derleme öncesinde, preprocessor  tüm #define lari metin olarak yerine koyar (textual substitution).

*/

// PArametreli MACRO => Fonksiyon gibi davranan ama aslında sadece metin değiştiren makrolardır.
#define MAX(a,b) (a > b ? a : b)

// Argümanı string'e çevirir. => stringification 
#define STR(s) #s

#define VAL(x) ({x;})

// Değişkenin adını ve değerini aynı anda yazdırmak
#define VIEW_VAR(a) printf(#a" = %d\n",a)

int main() {
  int x, y;
  
  scanf("%d",&x);
  scanf("%d",&y);

  printf("Plus grand valeur: %d\n",MAX(x,y));
  printf("Variable %s\n",STR(x));
  printf("Val x = %d\n",VAL(x));
  VIEW_VAR(x);

}