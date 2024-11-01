#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    int num;
    float score;
}stu;

void change(stu *s){
    s->num = 2002;
    s->score = 85.0;
}
int main() {
    stu *p = (stu*)malloc(sizeof(stu));
    p->num = 2001;
    p->score = 90.5;
    printf("num:%d,score:%.1f\n",p->num,p->score);
    change(p);
    printf("after change num:%d,score:%.1f\n",p->num,p->score);
    return 0;
}
