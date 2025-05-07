#include <stdio.h>

/*
 ->print_##type ifadesi aslında fonksiyon adını dinamik olarak oluşturur. 
 - Bu, print_int, print_float, print_char gibi generique fonksiyonların otomatik olarak tanimlar.
 
 ## operatörü, print_ ile type token'ını birleştirir. 
 Örneğin, type olarak int verildiğinde => bu print_int fonksiyonuna dönüşür. 

*/
#define PRINT_FUNCTION(type, format)      \
  void print_##type(type value){          \
    printf("Value : " format "\n",value); \
  }
PRINT_FUNCTION(double,"%f")
PRINT_FUNCTION(long,"%li")
PRINT_FUNCTION(unsigned,"%u")

int main() {
  double d = 2.3;
  long l = 1000000;
  unsigned  u = 2;

  print_double(d);
  print_long(l);
  print_unsigned(u);

  return 0;
}