#include <stdio.h>

int main(void) {
  printf("Hello World222\n");
  return 0;
}

// 执行 gcc index.c 
// 将会得到一个a.out二进制文件、然后执行这个编译后的文件 ./a.out、将会得到 Hello World

/* 
    -o(output缩写) 执行输出的二进制文件夹名称
    gcc -o hello index.c  这样将会得到一个hello的二进制文件
    gcc -std=c99 指定按照那个C语言标准进行编译

    !!! -std后面需要用=连接参数，而不是像上面的-o一样用空格，并且=前后也不能有多余的空格。
*/
