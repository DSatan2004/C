#include <stdio.h>
//指针的偏移使用场景,也就是对指针进行加和减

#define N 5
int main() {
    int a[N] = {1,2,3,4,5};//数组名内存储了数组的起始地址,a中存储的就是一个地址值
    int *p;
    p = a;
    int i;
    for(i = 0;i < N; i++)
    {
        printf("%3d",*(p+1));
    }
    printf("\n-----------\n");
    p = &a[4];
    for(i = 0;i < N; i++)
    {
        printf("%3d",*(p-i));
    }
    return 0;
}
