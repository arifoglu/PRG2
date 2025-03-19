#include <stdio.h>

void f(int *a,int *b, float *c);

int main() {
    int a,b;
    float c;
    f(&a,&b,&c);
    return 0;
}
void f(int *a,int *b, float *c){
    *a = 0;
    *b = 0;
    *c = 0.0;
}