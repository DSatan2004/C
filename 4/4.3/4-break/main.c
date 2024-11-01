#include <stdio.h>
//for循环实现从1加到100
int main() {
    int i,total = 0;
    for (i = 1; i <= 100; i++)
    {
        if(total > 2000){
            break;//当和大于2000，循环结束
        }
        total += i;
    }
    printf("total = %d,i=%d\n",total,i);
    return 0;
}

