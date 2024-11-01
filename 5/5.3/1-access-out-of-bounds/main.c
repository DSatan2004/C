#include <stdio.h>

int main() {
    int a[5] = {1,2,3,4,5};
    int j = 20,i = 10;
    a[0] = -1;
    a[5] = 6;//越界访问
    a[6] = 7;//造成异常
    printf("i = %d\n",i);//i的值发生改变
    return 0;
}
