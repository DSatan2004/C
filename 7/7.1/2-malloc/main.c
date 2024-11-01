#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *p;
    scanf("%d",&n);
    p = (char*)malloc(n);
    char c;
    scanf("%c",&c);
    fgets(p,n,stdin);
    printf("%s",p);
    return 0;
}