#include "function.h"

//前序遍历，也叫先序遍历。深度优先遍历
void PreOrder(BiTree p)
{
    if(p != NULL)
    {
        printf("%c", p->c);
        PreOrder(p->lchild);//打印左子树
        PreOrder(p->rchild);//打印右子树
    }
}

void InOrder(BiTree p)
{
    if(p != NULL)
    {
        InOrder(p->lchild);//打印左子树
        printf("%c", p->c);
        InOrder(p->rchild);//打印右子树
    }
}

void PostOrder(BiTree p)
{
    if(p != NULL)
    {
        PostOrder(p->lchild);//打印左子树
        PostOrder(p->rchild);//打印右子树
        printf("%c", p->c);
    }
}
int main() {
    BiTree pnew;//用来指向新申请的树结点
    BiTree tree = NULL;//tree是指向树根的，代表树
    char c;
    //phead是队列
    ptag_t phead = NULL,ptail = NULL,list_pnew=NULL,pcur;
    //abcdefghij
    while (scanf("%c",&c))
    {
        if(c == '\n')
        {
            break;//读取到换行就结束
        }
        //calloc申请的空间大小是后两个参数相乘，申请空间并对空间进行初始化，赋值为0
        pnew = (BiTree) calloc(1,sizeof(BiTNOde));
        pnew->c = c;
        list_pnew = (ptag_t) calloc(1, sizeof(tag_t ));//给队列结点申请空间
        list_pnew->p = pnew;
        //如果是树的第一个结点
        if (tree == NULL)
        {
            tree = pnew;//tree指向树的根节点
            phead = list_pnew;//第一个结点即是队列头，也是队列尾
            ptail = list_pnew;
            pcur = list_pnew;//pcur要指向要进入树的父亲元素
        } else{
            //让元素先入队列
            ptail->pnext = list_pnew;
            ptail = list_pnew;
            //接下来把b结点放入树中
            if(pcur->p->lchild == NULL)
            {
                pcur->p->lchild = pnew;//左孩子为空，放入左孩子
            } else if (pcur->p->rchild == NULL){
                pcur->p->rchild = pnew;//右孩子为空，放入右孩子
                pcur = pcur->pnext;//当前结点左右孩子都有，pcur已满，移向下一个
            }
        }
    }
    printf("----------------PreOrder----------------\n");//前序遍历，先打印当前节点，再打印左孩子，再打印右孩子
    PreOrder(tree);
    printf("\n-----------------InOrder----------------\n");//先打印左孩子，打印父亲，打印右孩子
    InOrder(tree);
    printf("\n----------------PostOrder---------------\n");//先打印左孩子，打印后孩子，最后打印父亲
    PostOrder(tree);
    return 0;
}
