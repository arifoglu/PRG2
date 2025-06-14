#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef void(*fn_t)(void *);

typedef struct {
    fn_t fn;
    void *args;
}entry_t;

typedef struct Node {
    struct Node *next;
    entry_t entry;
}Node;

typedef Node task_collection_t;

void push(Node **topNode , entry_t entry){
    Node *n = malloc(sizeof(Node));
    if(n == NULL){
        return;
    }
    n->entry = entry;
    n->next = *topNode;
    *topNode = n;
}

void pop(Node **topNode){
    if(*topNode == NULL){
        return;
    }
    Node *temp = *topNode;
    *topNode = (*topNode)->next;
    free(temp);
}

entry_t top(Node *topNode){
    return topNode->entry;
}

bool empty(Node *topNode){
    return topNode == NULL;
}

void func_register(task_collection_t **task_collection, fn_t fn, void *args){
    entry_t entry;
    entry.fn = fn;
    entry.args = args;
    push(task_collection,entry);
}

void do_work(task_collection_t **task_collection){
    while(!empty(*task_collection)){
        top(*task_collection).fn(top(*task_collection).args);
        pop(task_collection);
    }
}
void task_A(void *args) {
    printf("Execution of task A\n");
}

void task_B(void *args) {
    printf("Execution of task B with args: %s\n", (char *) args);
}

int main () {
    task_collection_t *task_collection = NULL;

    func_register(&task_collection, task_A, NULL);
    func_register(&task_collection, task_B, "Hello");

    do_work(&task_collection);
    
    return 0;
}