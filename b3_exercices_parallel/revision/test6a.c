#include <stdio.h>

void print_value(void *ptr,char c){
    if(c == 'i'){
        printf("%d",*(int *)ptr);
    }else if(c == 'd'){
        printf("%f",*(double *)ptr);
    }
}

int main() {
    int a = 10;
    double b = 3.14;

    print_value(&a,'i');
    print_value(&b,'d');
    

    return 0;
}
