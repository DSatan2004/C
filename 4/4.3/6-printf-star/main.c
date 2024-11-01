#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) //要输出多少行
    {
        for (int j = 0; j <= i; j++) //每一列输出什么
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
