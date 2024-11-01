#include <stdio.h>

typedef struct student{
    int num;
    float score;
}stu;
//在这里增加引用,在子函数中操作s和主函数中是一致的
void change(stu &s){
    s.num = 2002;
    s.score = 85.0;
}
int main() {
    stu s = {1001,90.5};
    printf("num:%d,score:%.1f\n",s.num,s.score);
    change(s);
    printf("after change num:%d,score:%.1f\n",s.num,s.score);
    return 0;
}
