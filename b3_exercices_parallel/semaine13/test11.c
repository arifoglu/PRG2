#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/*Node → Her kitap (data + sonraki kitap bilgisi).
-> Yığındaki tek bir elemanı temsil eder.
_> Sadece kendi verisini (data) ve bir sonrakini (next) bilir.
-> Diğer düğümlerden bağımsızdır
*/
typedef struct Node {
    struct Node *next;
    int data;
}Node;

/*StackData → Kitapları tutan kutu (kaç kitap var, en üstteki hangisi vs.).
->Yığınla ilgili genel bilgileri tutar.
->Sadece 1 kez tutulur, düğümlere dağılmaz.
->Düğümler bağımsız kalır — sadece data ve next içerir.
*/
typedef struct StackData {
    Node *topNode;
    size_t size;
}StackData;

typedef enum return_code {
    OK,
    MALLOC_FAILED,
    INVALID_ARG
}err_code;

void push(Node **topNode, int v){
    Node *n = malloc(sizeof(Node));
    if(n == NULL){
        return;
    }
    n->data = v;
    n->next = *topNode;
    *topNode = n;
}


void *new_stack () {
    struct StackData *s = malloc(sizeof(struct StackData));
    assert(s != NULL);
    s->topNode = NULL;
    s->size  = 0;
    return s;
}

err_code push_in_stack(void *this, int v){
    struct StackData *stack = (struct StackData *)this;
    struct Node *old = stack->topNode;          // Mevcut topNode saklanıyor.

    push(&stack->topNode,v);                    // 

    if(old == stack->topNode){                  // topNode değişmediyse, push() başarısız olmuş demektir.
        return MALLOC_FAILED;
    }

    stack->size += 1;                           // Eğer başarılıysa, boyutu artır.

    return OK;                                  // Başarıyla bitti.
}

int main() {
    void *s = new_stack();
    if(s != NULL){
        printf("Stack created!!\n");
    }

    if (push_in_stack(s, 10) == OK) {
        printf("10 pushed\n");
    } else {
        printf("Failed to push 10\n");
    }

    if (push_in_stack(s, 20) == OK) {
        printf("20 pushed\n");
    } else {
        printf("Failed to push 20\n");
    }


    return 0;
}