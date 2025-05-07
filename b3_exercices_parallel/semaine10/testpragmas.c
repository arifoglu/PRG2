#include <stdio.h>

#pragma pack(push,1)

typedef struct{
  char nom[50];
  int age;
  float salary;
}compact_personne_t;

#pragma pack(pop)

typedef struct{
  char nom[50];
  int age;
  float salary;
}personne_t;

void foo(int x);

int main() {
  personne_t personne;
  int a, b, c, d;
  #pragma GCC diagnostic error "-Wuninitialized"
    foo(a);
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wuninitialized"
    foo(b);
  #pragma GCC diagnostic pop
    foo(c);
  #pragma GCC diagnostic pop
    foo(d);

}