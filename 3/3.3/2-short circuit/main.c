#include <stdio.h>

//逻辑与和逻辑或 短路运算
int main() {
    int i = 0;
    i && printf("you can't see me !\n");
    i = 1;
    i || printf("you can't see me !\n");
    return 0;
}
