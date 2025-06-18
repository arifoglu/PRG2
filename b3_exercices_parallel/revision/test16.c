#include <stdio.h>

typedef double mat3x3;
typedef double vec3;

void mat_vec_mult(const mat3x3 m, const vec3 v, vec3 w){
    for(int i =0; i< 3;++i){
        w[i] = 0;
        for(int j = 0; j< 3;++j){
            w[i] += m[i][j] * v[j]; 
        }
    }
}

void display_vec(vec3 v){
    printf("[");
    for(int i= 0; i< 3;++i){
        printf("%g",v[i]);
    }
    printf("]");
}

void display_mat(mat3x3 m){
    printf("[");
    for(int i= 0; i< 3;++i){
        display_vec(m[i]);
    }
    printf("]");
}

int print_mat(const char *fmt,...){
    va_list ap;
    va_start(ap,fmt);
    int n = 0;

    va_end(ap);
}

int main() {
    mat3x3 m = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vec3 v = { 1, 2, 3 };
    vec3 w = {};

    mat_vec_mult(m, v, w);
    //print_mat("%m * %v = %v\n", m, v, w);
}