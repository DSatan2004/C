#include <stdio.h>

void modify_pointer(int *&p, int *q)
{
    p = q;
}

int main() {
    int *p = NULL;
    int i = 10;
    int *q = &i;
    modify_pointer(p,q);
    printf("after modify_pointer *p = %d\n",*p);
    return 0;//进程结束,推出代码不为0,代表进程异常结束
}
