#include <stdio.h>

//Macrolar ## isaretiyle birlesir. 
#define BIRLESIK(x,y)   x##y
#define BIRLESIK2(x,y)  x_##y 

int main() {
    int xy = 21;
    int x_y = 23;
    printf("%d\n",BIRLESIK(x,y));
    printf("%d\n",BIRLESIK2(x,y));

}