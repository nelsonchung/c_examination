/*
* 用意：了解for與break;搭配的用法
*/
#include <stdio.h>

#define MAX_NUM 4
#define MATCH_IDX 2
int main(int argc, char* argv[]){

    int cnt=0;
    for(cnt=0; cnt<MAX_NUM; cnt++){
        printf("cnt is %d\n", cnt);
        if(MATCH_IDX==cnt)
            break;
    }
    printf("final cnt is %d\n", cnt);
    return cnt;
}
