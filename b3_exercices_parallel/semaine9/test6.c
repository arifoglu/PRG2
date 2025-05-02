#include <stdio.h>
#include <string.h>

/*
flexible array ,char data[] => ile struct icine istedigin kadar bu veriyi
koymaya yarar

*/

struct buffer{
    size_t size;
    char data[];
};

int main() {
    int desired_size = 1024;
    struct buffer *buffer;

    buffer = malloc(sizeof(struct buffer) + sizeof(char) * desired_size);
    if(!buffer){return -1;};

    buffer->size = desired_size;

    char some_val = 'A';

    for(size_t i = 0; i < buffer->size ;i++){
        buffer->data[i] = some_val;
    }

    free(buffer);

$
    return 0;
}