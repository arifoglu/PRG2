#ifndef TEB_BLOCK_H
#define TEB_BLOCK_H

#define BLOCK_SIZE 4096  // Max size of the block to generate

//#define DEBUG 1 // Set to 1 to enable debug prints

// debug print macro

#if defined(DEBUG) && DEBUG == 0
    #define DBG_PRINTF(msg) printf(msg)
#elif defined(DEBUG) && DEBUG == 1
    #define DBG_PRINTF(msg)\
    do{\
        printf("%d",__LINE__);\
        printf(msg);\
    }while(0)
#else
    #define DBG_PRINTF(msg)
#endif

#endif