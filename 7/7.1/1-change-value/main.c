#include <stdio.h>
//在子函数中去改变main函数中某个变量的值

void change(int *j)
{
    *j /= 2;
}

int main() {
    int i;
    scanf("%d",&i);
    change(&i);
    printf("%d\n",i);
    return 0;
}