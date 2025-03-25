#include <stdio.h>

int main() {
    void *ptr;
    int val = 5;
    
    // kullanilabilir bu sekilde
    ptr = &val;
    
    //ama dereference olarak kullanmak icin cast gerekli (int *)
    val = *(int *)ptr;
    
    return 0;
}