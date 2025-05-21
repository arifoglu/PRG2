#include <stdio.h>
#include <math.h>
#include <string.h>
#include <inttypes.h>
#include <stdint.h>

float divise(float a, float b){
    if(b == 0.0f){
        return NAN;
    }
    float result = a / b;
    return result;
}

int main() {
    const double f = NAN;
    uint64_t fn;
    
    memcpy(&fn,&f,sizeof f);
    printf("NAN : %f %"PRIx64"\n",f,fn);

    return 0;
}