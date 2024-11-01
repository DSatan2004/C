#include <stdio.h>
#include <stdlib.h>

typedef int Elemtype;
typedef struct LNode{
    Elemtype data;
    struct LNode *next;
}LNode,*LinkList;

void list_head_insert(LinkList &L)
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    Elemtype x;
    LinkList s;
    scanf("%d",&x);
    while (x != 9999)
    {
        s = (LinkList) malloc(sizeof (LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d",&x);
    }
}

void list_tail_insert(LinkList &L)
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    Elemtype x;
    LinkList s,r = L;
    scanf("%d",&x);
    while (x != 9999)
    {
        s = (LinkList) malloc(sizeof (LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d",&x);
    }
    r->next = NULL;
}

void PrintList(LinkList L)
{
    L = L->next;
    while (L != NULL)
    {
        printf("%d",L->data);
        L = L->next;
        if (L != NULL)
        {
            printf(" ");
        }
    }
}

int main() {
    LinkList L;
    list_head_insert(L);
    PrintList(L);
    list_tail_insert(L);
    PrintList(L);
    return 0;
}
