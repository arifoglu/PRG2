#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[] = {10,20,30,40,50};
    printf("%lu\n",sizeof(nums));                   // 20
    
    int len = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n",len);                             // 4

    return EXIT_SUCCESS;
}