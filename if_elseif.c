/*
* 用意：了解if與elseif的用法
*/

#include <stdio.h>

int main(int argc, char* argv[]){

    int i=0;

    if( 0==i ){
        printf("(%s)(%d): i = %d\n", __FUNCTION__, __LINE__, i);
    }
    else if( 0==i || 2==i ){
        printf("(%s)(%d): i = %d\n", __FUNCTION__, __LINE__, i);
    }
    else if( 3==i ){
        printf("(%s)(%d): i = %d\n", __FUNCTION__, __LINE__, i);
    }
    else{
        printf("(%s)(%d): i = %d\n", __FUNCTION__, __LINE__, i);
    }
    return;
}
