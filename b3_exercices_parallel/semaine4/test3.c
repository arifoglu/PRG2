#include <stdio.h>
#include <stdlib.h>

/* Memory situation
ptr1[0] = 1684234849;   memory  int      0x64636261 

ptr1[0] = 1684234849;   memory  int      0x64 0x63 0x62 0x61

ptr1[0] = 1684234849;   memory char         a    b    c    d 

*/

int main() {   
    int  *ptr1 = malloc(4);     // 4 bytes memory allocation
    char *ptr2 = (char *)ptr1;  // 4 bytes(1byte, 1 byte, 1 byte, 1 byte) memory allocation
    
    ptr1[0] = 1684234849;

    printf("ptr1 = %p, val(4bytes) = %d \n",ptr1,ptr1[0]);
    printf("ptr2 = %p, byte1=%c,byte2=%c,byte3=%c,byte4=%c\n",ptr2,ptr2[0],ptr2[1],ptr2[2],ptr2[3]);

    free(ptr1);
    return 0;
}
