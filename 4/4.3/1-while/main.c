#include <stdio.h>
//计算从1-100的和
int main() {
    int i = 1,total = 0;
    while (i <= 100)
    {
        total = total + i;
        i++;//等价于i += 1,让表达式趋近于假 否则会死循环
    }
    printf("total=%d\n",total);
    return 0;
}
