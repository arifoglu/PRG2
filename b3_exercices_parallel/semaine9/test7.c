#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct buffer{
    size_t size;
    char data[];
};


int main() {
    int desired_size = 10;
    struct buffer *buf;

    buf = malloc(sizeof(struct buffer) + desired_size);
    if(!buf){return -1;};

    buf->size = desired_size;
    for(size_t i = 0 ; i < buf->size;++i){
        buf->data[i] = 'A' + i;
    }

    for(size_t i = 0; i < buf->size;++i){
        printf("%c ",buf->data[i]);
    }
    free(buf);
    return 0;
}