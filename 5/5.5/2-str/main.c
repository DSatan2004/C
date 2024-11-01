#include <stdio.h>
#include <string.h>

int mystrlen(char c[])


{
    int i = 0;
    while (c[i])//hello
    {
        i++;
    }
    return i;
}

int main() {
    int len;
    char c[20];
    char d[100] = "world";
    char e[100];
    gets(c);
    puts(c);
    len = strlen(c);//统计字符串的长度,不包括\0;
    printf("len = %d\n",len);
    len = mystrlen(c);
    printf("len = %d\n",len);
    strcat(c,d);//把d中的字符串拼接到c中
    puts(c);
    strcpy(e,c);//把c中的字符串复制到e中
    puts(e);
    printf("c?d %d\n", strcmp(c,"how"));//c大于hello 返回值是正值,相等是0,c小于"how"返回负值
    return 0;
}
