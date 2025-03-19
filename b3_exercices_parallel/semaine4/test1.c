#include <stdio.h> // Standart girdi/çıktı fonksiyonları için gerekli

int main()
{
    int val = 10;      // Bir tamsayı değişkeni tanımlanır ve değeri 10 olarak atanır
    int *p_val = &val; // Bir işaretçi tanımlanır ve bu işaretçi val değişkeninin adresini tutar

    printf("Value of val: %d\n", val);                 // val değişkeninin değeri yazdırılır
    printf("Address of val: %p\n", (void *)&val);      // val değişkeninin adresi yazdırılır
    printf("Value pointed to by p_val: %d\n", *p_val); // p_val işaretçisinin işaret ettiği değer yazdırılır

    //*p_val = 20;                           // p_val işaretçisinin işaret ettiği değer değiştirilir
    //printf("New value of val: %d\n", val); // val değişkeninin yeni değeri yazdırılır

    return 0; // Programın başarılı bir şekilde bittiğini belirtir
}