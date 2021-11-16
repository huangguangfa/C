
#include <stdio.h>

int main(){
    int* p;
    int i;
    p = &i;
    *p = 12;
    printf("i：%i \n", i); // i：12 
    printf("p：%i \n", *p); // p：12 
}

