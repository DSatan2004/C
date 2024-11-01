#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50
#define MaxSize1 5
typedef int Elemtype;
typedef struct{
    Elemtype data[MaxSize];
    int top;
}SqStack;

typedef struct LinkNode{
    Elemtype data[MaxSize1];
    int front,rear;
}SqQueue;

//初始化栈
void InitStack(SqStack &S)
{
    S.top = -1;
}

//初始化队列
void InitQueue(SqQueue &Q)
{
    Q.front = Q.rear = 0;
}

//入栈
void Push(SqStack &S,Elemtype x)
{
    S.data[++S.top] = x;
}

//入队
void EnQueue(SqQueue &Q, Elemtype m)
{
    Q.data[Q.rear] = m;
    Q.rear = Q.rear + 1;
}

//出栈
void Pop(SqStack &S,Elemtype &m)
{
    m = S.data[S.top--];
}

//出队
void DeQueue(SqQueue &Q,Elemtype &m)
{
    m = Q.data[Q.front];
    Q.front = Q.front + 1;
}

int main() {
    SqStack S;
    InitStack(S);
    Elemtype x;
    int i;
    for(i = 0; i < 3; i++) {
        scanf("%d", &x);
        Push(S, x);
    }
    for (i = 0; i < 3; i++) {
        Pop(S,x);
        printf("%2d",x);
    }
    printf("\n");
    SqQueue Q;
    InitQueue(Q);
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&x);
        EnQueue(Q,x);
        if (x == 7)
        {
            printf("false");
        }
    }
    printf("\n");
    for(i = 0;i < 4;i++)
    {
        x = 0;
        DeQueue(Q,x);
        printf("%2d",x);
    }
    return 0;
}
