#include <stdio.h>
int i = 10;//i是一个全局变量,不建议使用

void print(int i)//形参可以看成一个局部变量
{
    printf("I am print i = %d\n",i);

}

int main() {
    int i = 5; //局部变量只在离自己最近的大括号内有效
    printf("main i = %d\n",i);
    print(3);
    for (int k = 0; k < 5; ++k) {

    }
//    printf("%d\n",k);for循环括号内定义的变量，循环体外不可用
    return 0;
}
