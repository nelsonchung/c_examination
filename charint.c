/*
* 用意：了解宣告char與int的參數，佔用記憶體的關係
*/


#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){

        unsigned char ctmp[8] = "53589793";
        unsigned int  itmp    = 0x53589793;

        printf("ctmp is %s\n", ctmp);
        printf("the length of ctmp is %d\n", sizeof(ctmp)/sizeof(char));
        printf("itmp is 0x%x\n", itmp);
        printf("the length of itmp is %d\n", sizeof(itmp));
}

