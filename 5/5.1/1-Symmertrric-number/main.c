#include <stdio.h>
//课时4作业1 判断一个数是否是对称数
int main() {
    int a,b,backup_a;
    scanf("%d",&a);
    backup_a = a;
    while (a)
    {
        b = b*10 + a%10;
        a = a/10;
    }
    //printf("b = %d\n",b);
    if(b == backup_a)
    {
        printf("yes\n");
    } else{
        printf("no\n");
    }

    return 0;
}
