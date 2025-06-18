#include <stdio.h>

/*
 ->print_##type ifadesi aslında fonksiyon adını dinamik olarak oluşturur. 
 - Bu, print_int, print_float, print_char gibi generique fonksiyonların otomatik olarak tanimlar.
 
 ## operatörü, print_ ile type token'ını birleştirir. 
 Örneğin, type olarak int verildiğinde => bu print_int fonksiyonuna dönüşür. 

*/

#define PRINT_FUNCTION(type, format)\
    void print_##type(type value){\
    printf("Value : " format "\n",value);\
  }

PRINT_FUNCTION(int,"%d")
PRINT_FUNCTION(float,"%f")
PRINT_FUNCTION(char,"%c")

int main() {
  int i = 10;
  float f =3.14;
  char c = 'A';

  print_int(i);
  print_float(f);
  print_char(c);
  
  return 0;
}