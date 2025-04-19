#include <stdio.h>

int main() {
    // baslangic izinler => 0 
    unsigned char permissions = 0b00000000;
    // tum izinler tanimlaniyor.3 ozellik 3 bit 1
    unsigned char allPermissions = 0b00000111;

    // tum izinler aktif ediliyor
    permissions |= allPermissions;

    printf("permissions après avoir fait : 0x%X\n",permissions);

    // tum izinler tersine cevriliyor
    permissions = ~permissions;

    printf("permissions après invérsions : 0x%X\n",permissions);

    return 0;
} 