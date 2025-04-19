#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <errno.h>

bool isInteger(const char *str){
    //negative or positive sign
    if(*str == '-' || *str == '+'){
        str++;
    }
    if(*str == '\0'){
        return false;
    }
    while(isdigit((unsigned char) *str));

    return *str == '\0';
}
int insChar(char *str, int len, char c, int pos) {
    if ((pos < 0) || (pos > len)) return -1;
    for (int i = len; i >= pos; i--) str[i + 1] = str[i];  // include '\0'
    str[pos] = c;
    return 0;
}

int main(int argc, char *argv[]) {
    // usagge <command> <integer> <integer>
    if(argc != 3 || isInteger(argv[1]) || isInteger(argv[2])){
        printf("Usage : %s <integer 1 > <integer 2 > \n",argv[0]);
        return EXIT_FAILURE;
    }
    
    long long a ,b, mult;

    // check that entered integers are not too long
    errno = 0;
    a = strtoll(argv[1], NULL ,10);
    if(errno == ERANGE){
        printf("[e] %s too long\n",argv[1]);
        return EXIT_FAILURE;
    }
    b = strtoll(argv[2], NULL ,10);
    if(errno == ERANGE){
        printf("[e] %s too long\n",argv[2]);
        return EXIT_FAILURE;
    }
    
    mult = a * b;

    if((a != 0 ) && (mult / a != b)){
        printf("[e] %s * %s is too long\n",argv[1],argv[2]);
        return EXIT_FAILURE;
    }

    // compute needed string length to display result
    int len = snprintf(NULL, 0, "%lld", mult);
    
    int ns = 0; // number of separators
    
    if (len < 0) {
        printf("[e] Error while converting %lld\n", mult);
        return EXIT_FAILURE;
    } else {
        ns = (len - 1) / 3;      // count separators 
        len += ns;               // and add them to length
        printf("[i] %d characters needed to store %lld\n", len + 1, mult);
    }

    // allocate
    char *res = (char *)calloc(len + 1,sizeof * res);
    if(res == NULL){
        printf("[e] Could not allocate %d characters!\n", len);
        free(res);
        return EXIT_FAILURE;
    }
    // convert the result to a string
    len = snprintf(res, len + 1, "%lld", mult);
    if (len < 0) {
        printf("[e] Error while converting %lld\n", mult);
        return EXIT_FAILURE;
    }
    // format the result with separators before every 3 digits
    ns = 0; // no separator yet
    for (int i = 1; i < len - 2; i++) { // separators start at position 3 and end before last digit
        if ((len - i) % 3 == 0) {       // separatord at position 3, 6, 9, ...
            if (insChar(res, len + ns, '\'', i + ns) < 0) {  // take into account added separators
                printf("[e] Could not insert separator at position %d!\n", i);
                return -1;
            }
            ns++;                       // one separator added
        }
    }

    printf("[i] Result = %s\n", res);
    free(res);
    return 0;
}