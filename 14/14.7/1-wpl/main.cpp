#include <stdio.h>
#include <stdlib.h>

typedef int BiElemType;
typedef struct BiTNOde{
    BiElemType c;//用字符的ASCII码值作为weight值
    struct BiTNOde *lchild;
    struct BiTNOde *rchild;
}BiTNOde,*BiTree;

//tag结构体是辅助队列使用的
typedef struct tag{
    BiTree p;
    struct tag *pnext;
}tag_t,*ptag_t;

//deep代表路径长度
int wpl_PreOrder(BiTree p, int deep)
{
    static int wpl = 0;//静态局部变量和全局变量类似,只会初始化一次,指在函数内有效
    if(p != NULL)
    {
        //判断为叶子节点时,将对应字结点weight和deep相乘,加到wpl上
        if (p->lchild == NULL && p->rchild == NULL)
        {
            wpl += p->c * deep;
        }
        wpl_PreOrder(p->lchild,deep+1);//打印左子树
        wpl_PreOrder(p->rchild,deep+1);//打印右子树
    }
    return wpl;
}

int WPL(BiTree T)
{
    return wpl_PreOrder(T,0);
}

int main() {
    BiTree pnew;//用来指向新申请的树结点
    BiTree tree = NULL;//tree是指向树根的，代表树
    char c;
    //phead是队列
    ptag_t phead = NULL, ptail = NULL, list_pnew = NULL, pcur;
    //abcdefghij
    while (scanf("%c", &c)) {
        if (c == '\n') {
            break;//读取到换行就结束
        }
        //calloc申请的空间大小是后两个参数相乘，申请空间并对空间进行初始化，赋值为0
        pnew = (BiTree) calloc(1, sizeof(BiTNOde));
        pnew->c = c;
        list_pnew = (ptag_t) calloc(1, sizeof(tag_t));//给队列结点申请空间
        list_pnew->p = pnew;
        //如果是树的第一个结点
        if (tree == NULL) {
            tree = pnew;//tree指向树的根节点
            phead = list_pnew;//第一个结点即是队列头，也是队列尾
            ptail = list_pnew;
            pcur = list_pnew;//pcur要指向要进入树的父亲元素
        } else {
            //让元素先入队列
            ptail->pnext = list_pnew;
            ptail = list_pnew;
            //接下来把b结点放入树中
            if (pcur->p->lchild == NULL) {
                pcur->p->lchild = pnew;//左孩子为空，放入左孩子
            } else if (pcur->p->rchild == NULL) {
                pcur->p->rchild = pnew;//右孩子为空，放入右孩子
                pcur = pcur->pnext;//当前结点左右孩子都有，pcur已满，移向下一个
            }
        }
    }
    printf("%d\n",WPL(tree));
    return 0;
}