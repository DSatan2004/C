#include <stdio.h>

//stu等价于struct student,pstu等价于struct student*
typedef struct student{
    int num;
    char name[20];
    char sex;
}stu,*pstu;

typedef int INTEGER;
//typedef的使用,typedef起别名
int main(void) {
    stu s = {0};
    stu *p = &s;//定义了一个结构体指针变量
    pstu p1 = &s;//定义了一个结构体指针变量
    INTEGER num = 10;
    printf("num = %d,p -> num = %d\n",num,p->num);
    return 0;
}
