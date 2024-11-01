#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50
typedef int Elemtype;
typedef struct {
    Elemtype data[MaxSize];//数组
    int top;//始终指向栈顶的变量
}SqStack;

//初始化栈
void InitStack(SqStack &S)
{
    S.top = -1;
}

//判断栈是否为空
bool StackEmpty(SqStack S)
{
    if (S.top == -1)
    {
        return true;
    } else{
        return false;
    }
}

//入栈
bool Push(SqStack &S,Elemtype value)
{
    //判断栈是否满了
    if (S.top == MaxSize - 1)
    {
        return false;
    }
    S.data[++S.top] = value;
    return true;
}

//取栈顶元素
bool GetTop(SqStack S,Elemtype &m)
{
    if(StackEmpty(S))
    {
        return false;
    }
    m = S.data[S.top];//拿栈顶元素
    return true;
}

//出栈
bool Pop(SqStack &S,Elemtype &m)
{
    if(StackEmpty(S))
    {
        return false;
    }
    m = S.data[S.top--];//出栈 先m = S.data[S.top]; S.top = S.top - 1
    return true;
}

int main() {
    SqStack S;
    InitStack(S);
    bool flag;
    flag = StackEmpty(S);
    if(flag)
    {
        printf("stack is empty\n");
    }
    Push(S,3);
    Push(S,4);
    Push(S,5);
    Elemtype m;
    flag = GetTop(S,m);
    if(flag)
    {
        printf("get top %d\n",m);
    }
    flag = Pop(S,m);//弹出栈顶元素
    if(flag)
    {
        printf("pop element %d\n",m);
    }
    return 0;
}
