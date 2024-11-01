#include <stdio.h>

#define Maxsize 50//定义全局变量,顺序表的长度

typedef int ElemType;//让顺序表存储其他类型元素时可以快速完成代码修改

typedef struct {
    ElemType data[Maxsize];
    int length;//顺序表的长度
}SqList;
//顺序表的插入,因为L会改变,因此这里要用引用,i是插入的位置
bool ListInsert(SqList &L,int i,ElemType element){
    //判断i是否合法
    if (i < 1 || i > L.length + 1){
        return false;
    }
    //如果存储空间满了,就不能插入
    if (L.length == Maxsize){
        return false;
    }
    //把后面的元素依次往后移动
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = element;//放入要查的元素
    L.length++;//顺序表长度加1
    return true;//插入成功返回true
}

//打印顺序表
void PrintList(SqList L){
    int i;
    for(i = 0; i < L.length; i++){
        printf("%3d",L.data[i]);
    }
    printf("\n");

}

//删除顺序表中的元素,i是要删除的元素的位置,del是为了获取被删除元素的值
bool ListDelete(SqList &L,int i,ElemType &del){
    if(i < 1 || i > L.length){
        return false;
    }
    del = L.data[i - 1];
    for(int j = i;j < L.length;j++){
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return true;
}

//查找某个元素的位置,找到了就返回对应位置,没找到就返回0
int LocateElem(SqList L,ElemType e){
    for(int i = 0; i < L.length; i++){
        if (e == L.data[i]){
            return i + 1;//因为i是数组的下标,加1以后才是顺序表的下标
        }
    }
    return 0;//循环结束,没找到
}

//顺序表的初始化及插入操作实战
int main() {
    SqList L;//定义一个顺序表,变量L代表一个顺序表
    bool ret;//ret用来装函数的返回值
    L.data[0] = 1;//放置元素
    L.data[1] = 2;
    L.data[2] = 3;
    L.length = 3;//设置长度
    ret = ListInsert(L,3,60);
    if (ret){
        printf("insert sqlist success\n");
        PrintList(L);
    } else{
        printf("insert sqlist failed\n");
    }
    ElemType del;//删除的元素存入del中
    ret = ListDelete(L,1,del);
    if (ret){
        printf("delete sqlist success\n");
        printf("del element=%d\n",del);
        PrintList(L);
    }
    int pos;
    pos = LocateElem(L,60);
    if (pos)
    {
        printf("find this element");
    } else{
        printf("don't find this element");
    }
    return 0;
}
