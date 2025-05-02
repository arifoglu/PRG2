#include <stdio.h>
#include <string.h>

typedef enum { INT , FLOAT, STRING} DataType;

struct TypeData{
    DataType type;
    union data{
        int i;
        float f;
        char *chaine;
    }data;
};

int main() {
    struct TypeData t;
    t.type = INT;
    t.data.i = 4;

    if(t.type == INT ){
        printf("%d\n",t.data.i);
    }
    return 0;
}