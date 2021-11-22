#include <stdio.h>

int add()
{
    static int sum = 1;
    sum++;
    return sum;
}

int main()
{
    int res = add();
    int res1 = add();
    printf("res %d \n", res); // 2
    printf("res1 %d \n", res1); // 3
    return 0;
}