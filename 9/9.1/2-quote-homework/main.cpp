#include <stdio.h>
#include <stdlib.h>

void change(char *&p) //在子函数中要修改主函数的p,那么就加引用.
{
    p = (char *)malloc(100);
    fgets(p,100,stdin);
};

int main() {
    char *p;
    change(p);
    printf("%s\n",p);
    free(p);
    return 0;
}