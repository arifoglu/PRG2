#include <stdio.h>
#include <stdarg.h>
#include <string.h>

typedef double mat3x3[3][3];
typedef double vec3[3];

void mat_vec_mult(mat3x3 m,vec3 v,vec3 result);
int print_mat(const char *format, ...);
void display_vec(const vec3* v);

int main() {
    mat3x3 m = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vec3 v = { 1, 2, 3 };
    vec3 w = {};

    mat_vec_mult(m, v, w);
    print_mat("%m * %v = %v\n", m, v, w);
}

//mat_vec_mult
void mat_vec_mult(mat3x3 m, vec3 v, vec3 result){
    for(int i = 0; i < 3;++i){
        result[i] = 0;
        for(int j = 0; j < 3;++j){
            result[i] += m[i][j] * v[j]; 
        }
    }
}
// display vec
void display_vec(const vec3* v){
    printf("[");
    for(int i = 0; i< 3;++i){
        if(i)printf(",");
        printf("%g",(*v)[i]);
    } 
    printf("]");
}
// display mat
void display_mat(const mat3x3* m){
    printf("[");
    for(int i = 0; i< 3;++i){
        if(i)printf(",");
        display_vec(&(*m)[i]);
    } 
    printf("]");
}


int print_mat(const char *format, ...){
    int n = 0;
    va_list args;
    va_start(args,format);
    for(int i = 0; format[i] != '\0';++i){
        if(format[i] == '%' && i + 1 < strlen(format)){
            i++;

            if(format[i] == 'm'){     // matris
                mat3x3 *m = va_arg(args,mat3x3*);
                display_mat(m);
            }else if(format[i] == 'v'){// vector
                vec3 *v = va_arg(args,vec3*);
                display_vec(v);
            }else{
                printf("%%%c",format[i]);// invalid format
            }
        }else{
            putchar(format[i]);// normal caracter
        }
    }
    va_end(args);
    return n;
}