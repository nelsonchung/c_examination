#include <stdio.h>

//#show ++*p
void type1(void) {
      int array[] = { 10, 20};
      int *p = array;
      int v = ++*p;
      printf("v = %d, array[0] = %d, array[1] = %d, *p = %d\n", v, array[0], array[1], *p);
}

//#show *p++
void type2(void) {
      int array[] = { 10, 20};
      int *p = array;
      int v = *p++;
      printf("v = %d, array[0] = %d, array[1] = %d, *p = %d\n", v, array[0], array[1], *p);
}

//#show *++p
void type3(void) {
      int array[] = { 10, 20};
      int *p = array;
      int v = *++p;
      printf("v = %d, array[0] = %d, array[1] = %d, *p = %d\n", v, array[0], array[1], *p);
}

void type4(void){
    int a[3] = {0, 1, 2};
    int* p=a+1;
    printf("*p-- is %d\n", *p--);
}
void type41(void){
    int a[3] = {0, 1, 2};
    int* p=a+1;
    printf("*p-- is %d\n", *p--);
}
void type42(void){
    int a[3] = {0, 1, 2};
    int* p=a+1;
    printf("*--p is %d\n", *--p);
}
void type43(void){
    int a[3] = {0, 1, 2};
    int* p=a+1;
    printf("(*p)-- is %d\n", (*p)--);
}
void type44(void){
    int a[3] = {0, 1, 2};
    int* p=a+1;
    printf("--*p is %d\n", --*p);
}

int main(int argc, char* argv){
    type1();
    type2();
    type3();
    type41();
    type42();
    type43();
    type44();
    return 0;
}
