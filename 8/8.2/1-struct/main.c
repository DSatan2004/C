#include <stdio.h>
struct student{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
};

int main(void) {
    struct student s = {1001,"lele",'M',20,98.5};
    printf("%d %s %c %d %f\n",s.num,s.name ,s.sex ,s.age, s.score);
    //读取信息到结构体的每个成员里
//    scanf("%d%s %c%d%f",&s.num, s.name, &s.sex, &s.age, &s.score);
//    printf("%d %s %c %d %f\n",s.num,s.name ,s.sex ,s.age, s.score);
    int i;
    struct student sarr[3];
    i = 0;
    sarr[i] = s;
    printf("%d %s %c %d %f\n",sarr[i].num,sarr[i].name,sarr[i].sex ,sarr[i].age, sarr[i].score);
    return 0;
}
