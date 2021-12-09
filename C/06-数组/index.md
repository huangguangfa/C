### 数组赋值
>C语言的数组通过变量名后加方括号表示、方括号里面是数组成员的数量！数组的成员从0开始
```c
int main(){
    int array[10] = {0};
    array[0] = 1;
    array[9] = 10;
    printf("111 %d \n",array[0]); // 1
    printf("111 %d \n",array[2]); // 0
    printf("111 %d \n",array[9]); // 10
    printf("111 %d \n",array[10]); // 报错、因为声明的数组长度并没有10
    return 0;
}
```
>上方声明了一个Array数组、并且里面有十个成员都是0、还可以对指定位置进行快速赋值
```c
int array[5] = { 1, 2, 3, 4, 5 };
// 或者
int array[5] = {1, 2, 3};  // 这样剩下的两位将会得到0
// 在或者指定赋值
int array[5] = { 1, [3] = 5 }
// 在不知道数组成员的情况下、这种情况下会根据你的赋值长度自动扩展
int array[] = { 1, 2, 3 }
```

### 数组大小（字节长度）
```c
int main(){
    int array[2] = {};
    // 获取所有字节长度
    printf("数组总字节长度 %zu \n",sizeof(array)); // 8
    // 获取数组单个字节长度
    printf("数组单个字节长度 %zu \n",sizeof(array[0])); // 4
    // 获取数组个数
    printf("数组个数 %zu \n", sizeof(array) / sizeof(array[0])); // 2
    return 0;
}
```
>挺麻烦的、哈哈哈
### 多维数组
```c
int main(){
    int array[2][5] = {};
    array[0][2] = 1;
    printf("获取下标0数组下的第二项 %int \n", array[0][2]); // 1nt
    return 0; 
}
```
>多维数组是在声明的时候几纬数组就几个方括号`[][]`表示

```c
int array[2][5] = {};
// 设置初始值
int array[2][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 20}
};
// 或者
int array[2][2] = {
    [0][0] = 1, [1,1] = 2
};

```
### 数组的内存地址

```c
int main(){
    int a[5] = {1,2,3,4,5};
    int *one;
    one = &a[0];
    printf("值为 %d \n",*one); //值为 1
}

int main(){
    int array[2][5] = {};
    array[0][1] = 1;
    int* p;
    p = &array[0][1];
    printf("获取下标0数组下的第二项 %d \n", *p); // 1
    printf("值 %d \n",*a);
    return 0; 
}

// 统计数组的总数
int sum(int* arr, int len){
    int total = 0;
    for( int i=0; i<len; i++ ){
        total += arr[i];
    }
    return total;
}
int main(){
    int a[5] = {1,2,3,4,5};
    int res = sum(a, 5);
    printf("结果 %d \n", res);
    
}
```
>c提供了便利写法就是默认数组名指向的是第一个成员 