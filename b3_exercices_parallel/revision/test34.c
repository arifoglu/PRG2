#include <stdio.h>

#define GENERIK(name,type) \
struct name##_item{        \
    int pos;               \
    type val;              \
};

GENERIK(float,float);
/* olusacak olan struct:
                        struct float_item{
                        int pos;
                        int val;
                        }
*/
GENERIK(str,char *);
/* olusacak olan struct:
                        struct str_item{
                        int pos;
                        char * val;
                        }
*/
int main() {
    struct float_item f;
    f.pos = 3;
    f.val = 5;

    struct str_item s;
    s.pos = 4;
    s.val = "hello";

    printf("%d %.1f\n",f.pos,f.val);
    printf("%d %s\n",s.pos,s.val);

    return 0;
}
