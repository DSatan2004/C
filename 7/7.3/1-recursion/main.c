#include <stdio.h>

//阶乘
int f(int n)
{
    //一定要有结束条件
    if(n == 1)
    {
        return 1;
    }
    return n * f(n-1);//写公式
}

//上台阶，到第n个台阶几种走法
int step(int n)
{
    if(n == 1 || n == 2)
    {
        return n;
    }
    return step(n-1) + step(n - 2);
}

int main() {
    int n;
    scanf("%d",&n);
//    printf("f(%d) = %d\n",n, f(n));
    printf("step(%d) = %d\n",n, step(n));
    return 0;
}
