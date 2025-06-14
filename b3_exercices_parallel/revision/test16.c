#include <stdio.h>
#include <stdlib.h>

typedef double vec[3][3];
typedef double mat3x3[3][3];

vec3 mat_vec_mult(const mat3x3 m,const vec3 v , vec3 r){
    for(int i = 0; i < 3;++i){
        for(int j = 0; j < 3;++j){
            r[i][j] = m[i][j] * v[j];
        }
    }
}
void display_vec(const vec3 v){
    printf("[");
    for(int i = 0; i < 3;++i){
        if(i)printf(",");
        printf("%g",v[i]);
    }
    printf("]");
}
void display_mat(const mat3 m){
    printf("[");
    for(int i = 0; i < 3;++i){
        if(i)printf(",");
        display_vec(m[i]);
    }
    printf("]");
}

int main () {
    mat3x3 m = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vec3 v = { 1, 2, 3 };
    vec3 w = {};

    mat_vec_mult(m, v, w);
    //print_mat("%m * %v = %v\n", m, v, w);

    return 0;
}
