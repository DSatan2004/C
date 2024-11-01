#include <stdio.h>
//for循环实现从1加到100
int main() {
    int i,total = 0;
    for (i = 1; i <= 100; i++)
    {
        if(i % 2 == 0){
            continue;//continue下面的代码不会得到执行
        }
        total += i;
    }
    printf("total = %d\n",total);
    return 0;
}

