#include <stdio.h>

struct student_type1{
    double score;//8个字节
    int height;//4个字节
    short age;//两个字节
};

struct student_type2{
    int height;
    char sex;
    short age;
};

int main(void) {
    struct student_type1 s1={4,5,6,};
    struct student_type2 s2={7,'m',8};
    printf("s1 = size = %u\n", sizeof(s1));
    printf("s1 = size = %u\n", sizeof(s2));
    return 0;
}
