#include <stdio.h>

/*
Macrolar ## isaretiyle birlesir. 
*/
#define BIRLESIK(x,y) x##y
#define AYRI(x,y)     x_##y

int main() {
    int xy = 21;
    int x_y = 23;
    printf("Value : %d\n",BIRLESIK(x,y));
    printf("Value : %d\n",AYRI(x,y));

    return 0;
}
