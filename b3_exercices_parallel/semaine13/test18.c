#include <stdio.h>
#include <assert.h>

#define CAPACITE 10

/*
Normal dizide push_front yapmak icin tüm verileri kaydırmak gerekir.
Burda sadece debut’u değiştirerek geriye ekleme (push_front) ve ileriye ekleme (push_back) yapilir.
*/
typedef struct buffer_circulaire {
    size_t taille;              // eleman sayisi
    size_t debut;               // index
    int data[CAPACITE];         // sabit capacite
}deque;

#define IDX(a,i) (((i) + (a)->debut) % CAPACITE)

void push_back(deque *a, int val){
    a->data[IDX(a,a->taille)] = val;
    a->taille++;
}

void pop_back(deque *a){
    a->taille--;
}

int back(deque *a){
    return a->data[IDX(a,a->taille - 1)];
}

int front(deque *a){
    return a->data[IDX(a,0)];
}

void pop_front(deque *a) {
    a->debut = (a->debut + 1) % CAPACITE;
    a->taille--;
}

void push_front(deque *a, int val) {
    a->debut = IDX(a, CAPACITE - 1);
    a->data[a->debut] = val;
    a->taille++;
}

int main () {
    deque d = {0};
    push_back(&d,10);
    push_back(&d,20);
    push_back(&d,30);

    push_front(&d,5);
    push_front(&d,1);

    printf("Front: %d\n", front(&d));  
    printf("Back: %d\n", back(&d));  


    pop_front(&d);  
    pop_back(&d);   

    printf("Front after pop: %d\n", front(&d));  
    printf("Back after pop: %d\n", back(&d));    
    return 0;   
}

