/*
 * 表達#ifdef vs #if defined()
 */
#include <stdio.h>
#include <string.h>

#define DEBUG_IFDEF
#define DEBUG_ELIF

#define DBG_ZERO 0
#define DBG_ONE 1

int main(int argc, char* argv){
#ifdef DEBUG_IFDEF
    //因為有定義DEBUG_IFDEF，所以會print
    printf("#ifdef sample code. Define DEBUG_IFDEF\n");
#endif

#ifndef DEBUG
    //因為"沒有"定義DEBUG，所以會print
    printf("#ifndef sample code. Not define DEBUG\n");
#endif

#if defined(DEBUG_IFDEF) || defined(DEBUG)
    //DEBUG_IFDEF or DEBUG 其中一個有define，就會printf
    printf("#if defined() sample code. Define DEBUG_IFDEF, or define DEBUG\n");
#endif

#if defined(DEBUG_IFDEF) && defined(DEBUG)
    //DEBUG_IFDEF and DEBUG 兩個都要有define，才會printf
    printf("#if defined() sample code. Define DEBUG_IFDEF, and define DEBUG\n");
#endif
    
#if defined(DEBUG_IFDEF) || defined(DEBUG_ELIF)
    //DEBUG_IFDEF or DEBUG_ELIF其中一個有define，就會printf
    printf("#if defined() sample code. Define DEBUG_IFDEF and DEBUG_ELIF\n");
#endif

#if defined(DEBUG_IFDEF) && defined(DEBUG_ELIF) && defined(DEBUG)
    //DEBUG_IFDEF, DEBUG_ELIF and DEBUG三個都要define，才會printf
    printf("#if defined() sample code. Define DEBUG_IFDEF, DEBUG_ELIF and not define DEBUG\n");
#endif

#if DBG_ONE 
    printf("#if sample code. define DBG_ONE 1\n");
#else
    printf("#else sample code\n");
#endif

#if DBG_ZERO
    printf("#if sample code. define DBG_TWO 2\n");
#else
    printf("#else sample code.\n");
#endif
}
