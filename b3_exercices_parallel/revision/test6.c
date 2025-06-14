#include <stdio.h>
#include <stdlib.h>


int main () {
    // Cast donusumu
    int a = 42;
    void *ptr = &a;         // void pointer oldugu icin 
    int b = *(int *)ptr;    // dereference icin (int *) kullandik

    // 
    float x = 5.5;
    void *ptr = &x;             // void pointer oldugu icin 
    double y = *(float *)ptr;   // dereference icin (float *) kullandik

    /*
    -> void pointer kullaniminda derference ederken
    -> Hangi turde atama yapildiysa &, o turde derefrence etmek gerekir. 
    */

    return EXIT_SUCCESS;
}
