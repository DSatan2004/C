#include <stdio.h>
//上台阶题目

int step(int a){
    //结束条件
    if(a == 1 || a == 2){
        return a;
    }
    return step(a - 1) + step(a - 2);
}

int main(void) {
    int n;
    scanf("%d",&n);
    printf("%d\n", step(n));
    return 0;
}
