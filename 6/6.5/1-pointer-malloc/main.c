#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size;//size代表我们要申请多大字节的空间
    char  *p;//void*类型指针是不能偏移的,因此不会定义无类型指针
    scanf("%d",&size);//输入要申请的空间大小
    //malloc返回的void*代表无类型指针
    p = (char*)malloc(size);
    strcpy(p,"malloc success\n");
    puts(p);
    free(p);//释放申请的空间
    printf("free success\n");
    return 0;
}
