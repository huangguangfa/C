#include<stdio.h>

int test(){
    return 1;
}
void test1( int (*fn)(void), int i ){
    int res = (*fn)() + i;
    printf("结果：%d \n", res); // 结果：2 
}

int main(){
    test1(test,1);
}