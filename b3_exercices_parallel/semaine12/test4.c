#include <stdio.h>
#include <assert.h>

int divide(int a, int b){
    assert( b != 0);
    return a / b;
}

int main() {
    int result;
    result = divide(10,2);
    printf("result : %d\n",result);
    
    result = divide(20,2);
    printf("result : %d\n",result);
    return 0;
}