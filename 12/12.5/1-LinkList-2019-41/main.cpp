#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50
typedef int ElemType;

typedef struct LNode{
    ElemType data;//数据域
    struct LNode *next;
}LNode,*LinkList;

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
//找链表中间节点,并设置好L2链表
void find_middle(LinkList L,LinkList &L2)
{
    L2 = (LinkList) malloc(sizeof (LNode));//第二条链表的头节点
    LinkList pcur,ppre;//双指针法
    pcur = ppre = L->next;
    while (pcur)
    {
        pcur = pcur->next;
        if (pcur == NULL)//为了防止程序崩溃
        {
            break;
        }
        pcur = pcur->next;
        if (pcur == NULL)//为了使偶数个时,ppre依然指向中间值的前一个
        {
            break;
        }
        ppre = ppre->next;
    }
    L2->next = ppre->next;//有L2头节点指向后面一半链表
    ppre->next = NULL;//前一半链表的最后一个结点,next要为NULL
}

//逆转L2
void reverse(LinkList L2)
{
    LinkList r,s,t;
    r = L2->next;
    if(r == NULL)
    {
        return;//链表为空
    }
    s = r->next;
    if(s == NULL)
    {
        return;//链表只有一个结点
    }
    t = s->next;
    while (t != NULL)
    {
        s->next = r;
        r = s;//以下三句,三个指针同时后退一步
        s = t;
        t = t->next;
    }
    s->next = r;
    L2->next->next = NULL;//逆置后的链表尾部的next要为NULL
    L2->next = s;
}

void merge(LinkList L,LinkList L2)
{
    LinkList pcur,p,q;
    pcur = L->next;//pcur始终指向新链表的链表尾
    p = pcur->next;//p用来遍历L1链表
    q = L2->next;//q指向L2第一个结点,用来遍历L2链表
    while(p != NULL && q != NULL)
    {
        pcur->next = q;
        q = q->next;
        pcur = pcur->next;
        pcur->next = p;
        p = p->next;
        pcur = pcur->next;
    }
    if(p != NULL)
    {
        pcur->next = p;
    }
    if(q != NULL)
    {
        pcur->next = q;
    }
}

int main() {
    LinkList L;
    LinkList search;
    list_tail_insert(L);
    print_list(L);
    //寻找中间节点,并返回第二条链表
    LinkList L2 = NULL;
    find_middle(L,L2);
    printf("-----------------------------\n");
    print_list(L);
    print_list(L2);
    printf("-----------------------------\n");
    reverse(L2);
    print_list(L2);
    printf("-----------------------------\n");
    merge(L,L2);
    free(L2);
    print_list(L);
    return 0;
}
