#include <stdio.h>

//当你在子函数中修改变量的值要用引用
void modify_num(int &b)//形参中写&,要称为引用
{
    b = b + 1;
}
//c++的引用的讲解
//在子函数内修改主函数普通变量的值
int main() {
    int a = 10;
    modify_num(a);
    printf("after modify_num a = %d\n",a);
    return 0;
}
