#include <stdio.h>

int main() {
    /* |
    => | iki sayının bitlerini karşılaştırarak herhangi bir bit 1 ise sonucu 1, aksi takdirde 0 yapar.
    => | bir özelliği veya bayrağı aktif hale getirmek (set etmek) için kullanılır.
    */
    unsigned char configuration = 0x12; // 00010010 => 18
    unsigned char option        = 0x20; // 00100000 => 32
    //sonuc                     = 0x32  // 00110010 => 50

    configuration |= option;
    printf("New configuration 0x%X\n",configuration);
    
    ////////////////////////////////////////////////
    
    //// EXAMPLE 1 
    
    // Başlangıçta tüm bayraklar kapalı (0) 
    unsigned char flags = 0x00;// 00000000

    // Aktif hale getirmek istediğimiz bayraklar 1,3
    unsigned char flag1 = 0x01; // 00000001 (1. bit)
    unsigned char flag2 = 0x04; // 00000100 (3. bit)

    flags |= flag1;
    flags |= flag2;
    printf("Flags : 0x%X\n",flags); //0x5 => 00000101

    //// EXAMPLE 2 
    unsigned char rouge = 0x20; //00100000 
    unsigned char vert  = 0x10; //00100000 
    unsigned char blue  = 0x08; //00001000 

    // baslangicta ledler kapali
    unsigned char reg = 0x00;

    reg = (rouge | blue); // violet rengi elde etmek icin
    printf("Configurration led : 0x%x\n",reg); // 0x28 => 00101000

    return 0;
} 