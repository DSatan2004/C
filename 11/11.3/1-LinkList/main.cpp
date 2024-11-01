#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50
typedef int ElemType;
typedef struct LNode{
    ElemType data;//数据域
    struct LNode *next;
}LNode,*LinkList;
//LNode*是结构体指针,和LinkList完全等价
//输入3,4,5,6,7,9999
void list_head_insert(LNode *&L)
{
    L = (LinkList)malloc(sizeof(LNode));//申请头结点空间,头指针指向头结点
    L->next = NULL;
    ElemType x;
    scanf("%d",&x);
    LNode *s;
    while (x != 9999)
    {
        s = (LinkList)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;//s的next指向原本的第一个结点
        L->next = s;
        scanf("%d",&x);
    }
}

void print_list(LinkList L)
{
    L = L->next;
    while (L != NULL)
    {
        printf("%3d",L->data);
        L = L->next;
    }
    printf("\n");
}
//头插法来新建链表
int main() {
    LinkList L;//L是链表头指针,是结构体指针类型
    list_head_insert(L);
    print_list(L);
    return 0;
}
