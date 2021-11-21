#include<stdio.h>
#include<stdlib.h>

void test()
{
    printf("函数意味结束 \n");
}

int main(){
    printf("准备结束 \n");
    atexit(test);
    exit(EXIT_FAILURE);
}