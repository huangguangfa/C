
#include <stdio.h>

int main(){
    short* j;
    j = (short*)0x1234;
    j = j + 1;
    printf(" %p \n", &j); // 0x7ffee2d38808
}

