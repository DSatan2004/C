#include <stdio.h>
#include <string.h>
//字符串翻转,翻转后比较原字符串是否相等
//使用增量编写法
int main() {
    char c[100];//原字符串
    char d[100];//翻转后字符串
    gets(c);
    int i,j;
    for(i = 0,j = strlen(c) - 1; j >= 0; i++,j--)
    {
        d[j] = c[i];
    }
    int result = strcmp(c, d);
    if (result < 0)
    {
        printf("%d\n",-1);
    }
    else if (result > 0)
    {
        printf("%d\n", 1);
    }
    else {
        printf("%d\n", 0);
    }
        return 0;
}
