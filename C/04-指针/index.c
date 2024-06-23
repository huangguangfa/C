
#include <stdio.h>

// int main(){
//     short* j;
//     j = (short*)0x1234;
//     j = j + 1;
//     printf(" %p \n", &j); // 0x7ffee2d38808
// }

void increment(int *p){
    *p = *p + 1;
}

int main(){
    int j = 100;
    int *p = NULL;
    
    increment(&j);

    printf("%p \n", &j);
    printf("%d \n", j);
}