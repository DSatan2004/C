//
// Created by 王祉傲 on 2024/10/12.
//
#include "func.h"

//print_star的定义
int print_star(int i)
{
    printf("****************************\n");
    printf("print_star %d\n",i);
    return i+3;
}

//这里是函数的定义,可以调用print_star,也就是嵌套调用
void print_massage()
{
    printf("how do you do\n");
    print_star(6);//6是实参
}

