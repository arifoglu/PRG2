  #include <math.h>
  #include <stdio.h>
  #include <CUnit/CUnit.h>
  #include <CUnit/Console.h>
  #include <string.h>
#include <stdbool.h>

#define STACK_MAX 10

typedef struct {
    int data[STACK_MAX];
    int top; // Indice du prochain emplacement libre (0 si vide)
} Stack;

// Initialise la pile (vide)
void stack_init(Stack *s) {
    s->top = 0;
}

// Retourne vrai si la pile est vide
bool stack_is_empty(Stack *s) {
    return s->top == 0;
}

// Empile une valeur. Retourne vrai si succès, faux si pile pleine.
bool stack_push(Stack *s, int value) {

    if (s->top >= STACK_MAX) {
        return false; // pile pleine
    }
    s->data[s->top] = value;
    s->top++;

    return true;
}

// Dépile et retourne la valeur au sommet. Retourne -1 si pile vide.
int stack_pop(Stack *s) {

    if (stack_is_empty(s)) {
        return -1; // pile vide
    }
    s->top--;

    return s->data[s->top];
}

void test_stack_vide(){
    Stack s;
    stack_init8(&s);
    CU_ASSERT_TRUE(stack_is_empty(&s));
    CU_ASSERT_EQUAL(stack_pop(&s),-1);

}

void test_empile_depile(){
    Stack s;
    stack_init(&s);

    stack_push(&s,10);
    stack_push(&s,20);
    stack_push(&s,30);
    CU_ASSERT_FALSE(stack_is_empty(&s));

    CU_ASSERT_EQUAL(stack_pop(&s),30);
    CU_ASSERT_EQUAL(stack_pop(&s),20);

    stack_push(&s,40);
    CU_ASSERT_EQUAL(stack_pop(&s),40);
    CU_ASSERT_EQUAL(stack_pop(&s),10);
    
    CU_ASSERT_TRUE(stack_is_empty(&s));
    

}

int main() {
    CU_initialize_registry();

    CU_pSuite suite_moyenne = CU_add_suite("testing",NULL,NULL);
    if(suite_moyenne == NULL) return CU_get_error();
    CU_add_test(suite_moyenne,"Calcul test",test_moyenne);

    CU_pSuite suite_max = CU_add_suite("testing",NULL,NULL);
    if(suite_max == NULL) return CU_get_error();
    CU_add_test(suite_max,"Calcul test",test_max);

    CU_console_run_tests();
    CU_cleanup_registry();

    return CU_get_error();
}