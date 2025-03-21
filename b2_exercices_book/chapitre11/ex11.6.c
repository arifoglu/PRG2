#include <stdio.h>

struct Point{
    float x, y;
};

void echange(struct Point *p1,struct Point *p2);

int main() {
    struct Point p1, p2;
    p1.x = 3.5;
    p1.y = 4.5;

    p2.x = 6.5;
    p2.y = 7.5;

    printf("p1(%.1f,%.1f), p2(%.1f,%.1f)\n",p1.x,p1.y,p2.x,p2.y);
    echange(&p1,&p2);
    printf("p1(%.1f,%.1f), p2(%.1f,%.1f)\n",p1.x,p1.y,p2.x,p2.y);


    return 0;
}

void echange(struct Point *p1,struct Point *p2){
    struct Point t = *p1;
    *p1 = *p2;
    *p2 = t;
}


