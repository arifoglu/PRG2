#include <stdio.h>
#include <string.h>

enum light{
    rouge = 10,
    vert = 1,
    jaune = 5
};

int main() {
    enum light l = jaune;
    
    printf("Light situation : %d\n",l);

    return 0;
}