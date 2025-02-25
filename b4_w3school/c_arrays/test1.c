#include <stdio.h>

int main(){
    //
    int nums[] = {1,2,3};   //123
    for(int i = 0; i < 3;++i){
        printf("%d",nums[i]);
    }
    printf("\n");
    
    // 
    int nums2[] = {1,2,4.5};// 124
    for(int i = 0; i < 3;++i){
        printf("%d",nums2[i]);
    }
    
    return 0;
}