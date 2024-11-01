#include <stdio.h>

int main() {
    int i,j;
    for (i = 0; i < 5; i++) {
        printf("i = %d\n",i);//打印i就知道是第几次外层循环
        for (j = 0; j < 5; j++) {
            printf("%d ",i*j);
        }
        printf("\n");//输出一个换行
    }
    return 0;
}
