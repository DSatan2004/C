#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50
typedef int ElemType;

typedef struct LNode{
    ElemType data;//数据域
    struct LNode *next;
}LNode,*LinkList;
//LNode*是结构体指针,和LinkList完全等价

//头插法
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

//尾插法
void list_tail_insert(LNode* &L)
{
    L = (LinkList)malloc(sizeof(LNode));//申请头结点空间,头指针指向头结点
    L->next = NULL;
    ElemType x;
    scanf("%d",&x);
    LNode *s,*r = L;//用来指向申请的新结点,r始终指向链表尾部
    while(x != 9999)
    {
        s = (LinkList) malloc(sizeof(LNode));//为新结点申请空间
        s->data = x;
        r->next = s;//新结点给尾结点的next指针
        r = s;//r指向新的尾部
        scanf("%d",&x);
    }
    r->next = NULL;//让尾结点的next为NULL
}

//打印链表
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

//头插法,尾插法来新建链表
int main() {
    LinkList L;//L是链表头指针,是结构体指针类型
//    list_head_insert(L);
    list_tail_insert(L);
    print_list(L);
    return 0;
}
