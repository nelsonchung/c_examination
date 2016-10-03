#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* Result:
 * val is 1
 * tmp is 0xbf9e5c0b
 * tmp is 0xbf9e5c0b
 * tmp is 1
 */
 
int main(int argc, char* argv[]){
    /*
     * void指標是個可以只量任何資料型別的通用指標
     */
    //void *tmp;
    //It is better code style
    void* tmp;
    bool val = 1;
    tmp = &val;

    //val是一個行別為bool的值
    printf("val is %d\n", val);
    //tmp是一個void指標,內容儲存指向val的address
    printf("tmp is %p\n", tmp);
    //printf("tmp is %d\n", (bool*)tmp);
    //tmp，此時，變成一個bool指標，內容還是儲存指向val的address
    printf("tmp is %p\n", (bool*)tmp);
    //加上一個*，取出tmp指向位置的值
    printf("tmp is %d\n", *(bool*)tmp);
    /*
     * You will get compile error
     * voidpointer.c:27:27: warning: dereferencing ‘void *’ pointer [enabled by default]
     *      printf("tmp is %d\n", *tmp);
     *      ^
     * voidpointer.c:27:5: error: invalid use of void expression
     *      printf("tmp is %d\n", *tmp);
     *      ^
     *
    printf("tmp is %d\n", *tmp);
    */
    return;
}
