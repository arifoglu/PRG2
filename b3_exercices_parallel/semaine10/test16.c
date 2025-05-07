#include <stdio.h>

#define SQR(x) \
  ({ \
    int _x = (x); \
    int _result = _x * _x; \
    _result;\
  })

#if 0 

/*
Burada do while(0) döngüsü, 
SWAP makrosunun bir kez çalışmasını garantiler ve bu, makronun sonunda bir kontrol yapılmasını sağlar.
*/

#define SWAP(x,y) do{ \
  int _temp = x;      \
  x = y;              \
  y = temp;           \
 }while(0)
 
 #endif
 
int main() {
  int x, y;
  scanf("%d",&x);
  scanf("%d",&y);

  printf("Square(x) = %d\n",SQR(x));
  
  #if 0 
  if(SQR(x) > 10)
    SWAP(x,y);
  #endif
  
  printf("x = %d y :%d\n", x, y);
  
  return 0;
}