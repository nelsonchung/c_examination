/*
* 用意：了解#ifdef vs #if defined()
*/


#include <stdio.h>
#include <string.h>

#define DEBUG_IFDEF
#define DEBUG_ELIF

#define DBG_ZERO 0
#define DBG_ONE 1

int main(int argc, char* argv){

#ifdef DEBUG_IFDEF
    printf("(OptionA)#ifdef sample code. Define DEBUG_IFDEF\n");
#endif

#ifndef DEBUG
    printf("(OptionB)#ifndef sample code. Not define DEBUG\n");
#endif

#if defined(DEBUG_IFDEF) || defined(DEBUG)
    printf("(OptionC)#if defined() sample code. Define DEBUG_IFDEF, or define DEBUG\n");
#endif

#if defined(DEBUG_IFDEF) && defined(DEBUG)
    printf("(OptionD)#if defined() sample code. Define DEBUG_IFDEF, and define DEBUG\n");
#endif
    
#if defined(DEBUG_IFDEF) || defined(DEBUG_ELIF)
    printf("(OptionE)#if defined() sample code. Define DEBUG_IFDEF and DEBUG_ELIF\n");
#endif

#if defined(DEBUG_IFDEF) && defined(DEBUG_ELIF) && defined(DEBUG)
    printf("(OptionF)#if defined() sample code. Define DEBUG_IFDEF, DEBUG_ELIF and not define DEBUG\n");
#endif

#if DBG_ONE 
    printf("(OptionG1)#if sample code. define DBG_ONE 1\n");
#else
    printf("(OptionG2)#else sample code\n");
#endif

#if DBG_ZERO
    printf("(OptionH1)#if sample code. define DBG_TWO 2\n");
#else
    printf("(OptionH2)#else sample code.\n");
#endif
}
