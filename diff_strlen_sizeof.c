/*
* 用意：了解strlen and sizeof的使用方式,以及char, int的長度關係
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    char str[] = "I am Nelson";
    int five = 5;

    int len = strlen(str);
    printf("strlen(str) is %d\n", len);
    len = sizeof(str);
    printf("sizeof(str) is %d\n", len);
    len = sizeof(char);
    printf("sizeof(char) is %d\n", len);
    len = sizeof(int);
    printf("sizeof(int) is %d\n", len);
    len = sizeof(five);
    printf("sizeof(five) is %d\n", len);
}

