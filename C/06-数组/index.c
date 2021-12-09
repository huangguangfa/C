#include<stdio.h>


// int main(){
//     int array[2][5] = {};
//     array[0][1] = 1;
//     int* p;
//     p = &array[0][1];
//     printf("获取下标0数组下的第二项 %d \n", *p); // 1nt
//     return 0; 
// }
int sum(int* arr, int len){
    int total = 0;
    for( int i=0; i<len; i++ ){
        total += arr[i];
    }
    return total;
}
int main(){
    int a[5] = {1,2,3,4,5};
    printf("结果 %d \n", *(a + 2));
}