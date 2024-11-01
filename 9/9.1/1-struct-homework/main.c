#include <stdio.h>
//课时8作业1 练习结构体
typedef struct student{
    int num;
    char name[20];
    char sex;
}stu;

int main() {
    stu s;
    scanf("%d%s %c",&s.num,s.name,&s.sex);
    printf("%d %s %c",s.num,s.name,s.sex);
    return 0;
}