#ifndef UTILS_H
#define UTILS_H

// diger dosyada tanimli global degiskeni bildiriyoruz
extern int shared_counter;

//inline small fonction
static inline int add(int a, int b){
    return a + b;
}
void print_counter(void);

#endif