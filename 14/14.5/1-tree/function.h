//
// Created by 王祉傲 on 2024/10/31.
//

#ifndef INC_1_TREE_FUNCTION_H
#define INC_1_TREE_FUNCTION_H

#include <stdio.h>
#include <stdlib.h>

typedef char BiElemType;
typedef struct BiTNOde{
    BiElemType c;//c就是data
    struct BiTNOde *lchild;
    struct BiTNOde *rchild;
}BiTNOde,*BiTree;

//tag结构体是辅助队列使用的
typedef struct tag{
    BiTree p;
    struct tag *pnext;
}tag_t,*ptag_t;
#endif //INC_1_TREE_FUNCTION_H
