#include <stdio.h>
#include <stdlib.h>

typedef int Elemtype;
typedef struct LinkNode{
    Elemtype data;
    struct LinkNode *next;
}LinkNode;
typedef struct {
    LinkNode *front,*rear;//链表头,链表尾
}LinkQueue;//先进先出

//队列的初始化,用带头结点的链表来实现
void InitQueue(LinkQueue &Q){
    Q.front = Q.rear = (LinkNode*) malloc(sizeof(LinkNode));
    Q.front->next = NULL;
}

//判断是否为空
bool isEmpty(LinkQueue Q)
{
    if (Q.front == Q.rear)
    {
        return true;
    } else{
        return false;
    }
}

//入队
void EnQueue(LinkQueue &Q,Elemtype x)
{
    LinkNode *pnew = (LinkNode*) malloc(sizeof(LinkNode));
    pnew->data = x;
    pnew->next = NULL;//要让next为NULL
    Q.rear->next = pnew;//尾指针的next指向pnew,因为从尾部入队
    Q.rear = pnew;//rear指向新的尾部
}

//出队
bool DeQueue(LinkQueue &Q,Elemtype &x)
{
    if (isEmpty(Q))//队列为空
    {
        return false;
    }
    LinkNode *q = Q.front->next;//拿到第一个结点
    x = q->data;//获取要出队的元素值
    Q.front->next = q->next;//让一个结点断链
    if(Q.rear == q)//链表只剩余一个结点,被删除后,改变rear
    {
        Q.rear == Q.front;
    }
    free(q);
    return true;
}
//通过链表实现队列
int main() {
    LinkQueue Q;
    bool ret;
    InitQueue(Q);//初始化
    EnQueue(Q,3);
    EnQueue(Q,4);
    EnQueue(Q,5);
    EnQueue(Q,6);
    EnQueue(Q,7);
    Elemtype element;
    ret = DeQueue(Q,element);
    if (ret)
    {
        printf("DeQueue success element=%d\n",element);
    }else{
        printf("DeQueue failed\n");

    }
    return 0;
}
