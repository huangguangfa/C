#include<stdio.h>


int main(){
    int array[2][5] = {};
    array[0][1] = 1;
    int* p;
    p = &array[0][1];
    printf("获取下标0数组下的第二项 %int \n", *p); // 1nt
    return 0; 
}