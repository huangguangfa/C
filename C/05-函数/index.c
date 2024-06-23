#include <stdio.h>
#include "test.h"
// int add()
// {
//     static int sum = 1;
//     sum++;
//     return sum;
// }

// int main()
// {
//     int res = add();
//     int res1 = add();
//     printf("res %d \n", res); // 2
//     printf("res1 %d \n", res1); // 3
//     return 0;
// }

int sum(int p)
{
  if(p == 1){
    printf("%d \n", p);
  }
}

int main()
{
  int a = 1;

  sum(a);

  printf("%d \n", a);

  return 0;
}