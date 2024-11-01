#include <stdio.h>
//读取一堆整型数,统计2出现的次数
int main() {
    int a[100];
    int count = 0,N;
    scanf("%d",&N);
    for (int i = 0; i < N; i++) {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < N; i++) {
        if(a[i] == 2)
        {
            count++;
        }
    }

    printf("%d\n",count);
    return 0;
}