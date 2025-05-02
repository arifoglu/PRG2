#include <stdio.h>

/*
Memory deki gorunum:int genellikle 4 byte hizalama ister. Bu yüzden char'dan sonra 3 byte boşluk eklenir

+------+--------+--------+--------+--------+--------+--------+--------+--------+
|  a   |   boş  |   boş  |   boş  |   boş  |   b (4 byte = int)                |
+------+--------+--------+--------+--------+--------+--------+--------+--------+
/////
(packed)=>C'de bir struct'ın padding olmadan belleğe arka arkaya yerleştirilmesini sağlar.
+------+--------+--------+--------+--------+
|  a   |       b (int)                |
+------+--------+--------+--------+--------+

*/

struct Normal {
    char a;   // 1 byte
    int b;    // 4 byte
};

struct __attribute__((packed)) Packed {
    char a;   // 1 byte
    int b;    // 4 byte
};

int main() {
    printf("Normal size: %lu\n", sizeof(struct Normal));
    printf("Packed size: %lu\n", sizeof(struct Packed));
    return 0;
}
