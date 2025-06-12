#include <stdio.h>
#include <assert.h>

typedef struct tableau_redim {
    size_t taille;             
    size_t capacite;               
    int *data;        
}vector_int;

vector_int *new_vector(){
    vector_int *v = calloc(1, sizeof(struct tableau_redim));
    assert(v);
    return v;
}

void free_vector(vector_int *v){
    free(v->data);
    free(v);
}

void push_back(vector_int *v, int val){
    if(v->taille = v->capacite){
        v->capacite += (v->capacite ? v->capacite : 1);
        v->data = (int*)realloc(v->data, v->capacite * sizeof(int));
        assert(v->data);
    }
    v->data[v->taille++] = val;
}


int main () {
    vector_int *v = new_vector();

    for (int i = 0; i < 5; i++) {
        push_back(v, i * i);
        printf("taille = %zu, capacite = %zu\n", v->taille, v->capacite);
    }

    for (int i = 0; i < v->taille; i++) {
        printf("%d ", v->data[i]);
    }

    printf("\n");

    free_vector(v);

    return 0;   
}

/*
!!!!Kesinlikle bininmesi gerekenler!!!!
--> Dinamik vector tanimi  
                        typedef struct tableau_redim {
                            size_t taille;
                            size_t capacite;
                            int *data;
                        } vector_int;

--> new_vector()
                        vector_int *new_vector() {
                            vector_int *v = calloc(1, sizeof(struct tableau_redim));
                            assert(v);
                            return v;
                        }

--> push_back()
                        void push_back(vector_int *v, int val) {
                            if (v->taille == v->capacite) {
                                v->capacite += (v->capacite ? v->capacite : 1);
                                v->data = realloc(v->data, v->capacite * sizeof(int));
                                assert(v->data);
                            }
                            v->data[v->taille++] = val;
                        }
--> free_vector
                        void free_vector(vector_int *v) {
                            free(v->data);
                            free(v);
                        }
*/