#include <stdio.h>
#include <string.h>

/*Result
 * strlen(str) is 11
 * sizeof(str) is 12
 * sizeof(char) is 1
 * sizeof(int) is 4
 * sizeof(five) is 4
 */
int main(int argc, char* argv[]){
    char str[] = "I am Nelson";
    int five = 5;

    printf("strlen(str) is %d\n", strlen(str));
    printf("sizeof(str) is %d\n", sizeof(str));
    printf("sizeof(char) is %d\n", sizeof(char));
    printf("sizeof(int) is %d\n", sizeof(int));
    printf("sizeof(five) is %d\n", sizeof(five));
}

