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

/*
- Her satira bu isareti \ koyarak cok satirli birsey yapilabilir.
- Bu yapı SQR(x) içinde birden fazla satırda kod yazmayi sağlar.
({ ... }) => içeride geçici değişken tanımlanabilir (örneğin _x).
*/ 
#define SQR(x) \
  ({ \
    int _x = (x); \
    int _result = _x * _x; \
    _result;\
  })

#define SWAP(x,y) do{ \
  int _temp = x;      \
  x = y;              \
  y = temp;           \
 }while(0)

int main() {
  int x, y;
  
  scanf("%d",&x);
  scanf("%d",&y);

  printf("Plus grand valeur: %d\n",MAX(x,y));
  printf("Variable %s\n",STR(x));
  printf("Val x = %d\n",VAL(x));
  VIEW_VAR(x);
  printf("Square(%d) = %d\n", x, SQR(x));

  printf("x = %d y :%d\n", x, y);
  SWAP(x,y);
  printf("x = %d y :%d\n", x, y);
}