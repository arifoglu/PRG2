#include <stdio.h>

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
int main() {
  int x, y;
  scanf("%d",&x);

  printf("Square(%d) = %d\n", x, SQR(x));

  return 0;
}