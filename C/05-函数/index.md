### 函数
 - 特点：
    - 需要定义返回类型
    - 先声明后使用
    - 参数需要声明类型和参数名
    - 函数括号后不需要加分号
    - return语句需要和方法定义的返回类型一致


```c
int test( int n){
    return n + 2;
}

int main(){
    int s = test(2);
    // int s = test(2,2); //报错、多传入了参数
    printf("%i \n", s); // 4
}
```

### C语言函数递归 九九乘法口诀、暂时不会字符串拼接
```c
    void nine(int i){
        if( i <= 9 ){
            for(int j=1; j<=i; j++){
                int s = i * j;
                printf("%i * %i = %i \n",j,i,s);
            }
            nine(++i);
        }
    }
    int main(){
        nine(1);
    }
```

### 函数需要声明在源文件的顶层、不返回值的函数使用void表示、
```c
void func(void){
    printf("没有任何返回值");
}
int main(){
    func();
}
```

### main函数
```c
int main(void) {
  printf("Hello World\n");
  return 0;
}
```
>main函数是一个入口函数、所有的函数一定要包含一个main函数、当然你也不能用两个、因为我试过会报错、上面示例中，最后的return 0;表示函数结束运行，返回0、C 语言约定，返回值0表示函数运行成功，如果返回其他非零整数，就表示运行失败，代码出了问题。系统根据main()的返回值，作为整个程序的返回值，确定程序是否运行成功、正常情况下，如果main()里面省略return 0这一行，编译器会自动加上，即main()的默认返回值为0


### 参数的传值引用
```c
    void increment(int s){
        ++s;
    }
    int main(){
        int i = 1;
        increment(i);
        printf("i=%i \n",i); //i=1 
    }
```
>上面示列并不能修改i的真实值、这是因为传入的变量值是一个拷贝、而不是变量i本身、所以需要return出最新的计算结果、也可以使用指针来修改、请看下面案例：交换值

```c
void Swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a = 1;
    int b = 2;
    Swap(&a,&b);
    printf("a:%i --- b:%i \n", a, b); // a:2 --- b:1
}
```
### 函数指针
```c
void print(int i){
    printf("%d \n",i); // 1
}

int main(){
    void (*print_ptr)(int) = &print;
    //五种调用方式
    print(1); // 直接通过方法名称
    (*print)(1); // 直接拿出内存地址的值
    (&print)(1); // 拿出内存地址调用
    print_ptr(1); // 内存地址调用
    (*print_ptr)(1); // 内存地址的值
}
```
> 定义一个函数指针、并且直接使用指针调用函数、调用函数的方式一共有五种；然后函数当成参数或者返回值可以这样写
```c
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
```


