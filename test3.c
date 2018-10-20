//
// Created by z lin zhang on 2018/9/24.
//

#include <stdio.h>
#include <sys/malloc.h>
#define bool int
#define True 1
#define False 0
#define ERROR -1
#define SIZE 100
/*
    1、初始化线性表
    2、删除线性表
    3、判定是否为空表
    4、线性表长度
    5、输出线性表全部元素
    6、按元素位置查找
    7、按元素值查找
    8、插入
    9、删除
    10、在末尾添加值
    11、删除末位置
*/
typedef struct {
    int data[SIZE]={7,9,0,6,5};
    int length=5;
} seq_list;

// 初始化
void init_list(seq_list  *list)
{
    // 分配存储线性表的空间
    list->data = (seq_list*)malloc(sizeof(seq_list));
    list->length = 0;
}

// 销毁线性表
void destroy_list(seq_list* list)
{
    free(list);
}

// 判断是否为空表
bool list_empty(seq_list* list)
{
    // 是空表返回 1， 不是0
    return (list->length == 0);
}

// 线性表长度
int list_length(seq_list* list)
{
    return (list->length);
}

// 输出线性表
void disp_list(seq_list* list)
{
    int i;
    for (i=0; i<length; i++){
        printf("%d", list->data[i]);
    }
    printf("\n");
}

// key 位置元素
int get_elem(seq_list* list, int key)
{
    int value = ERROR;
    if (-1 < key && key < list->length){
        n = list->data[key];
    }
    return n;
}

// 按值查找, 返回位置
int locate_elem(seq_list* list, int value)
{
    int key = -1;
    int i;
    for (i=0; i<list->length; i++){
        if (list->data[i] == value){
            key = i;
            break;
        }
    }
    return key;
}

// 插入 value 到 key 位置
bool list_insert(seq_list* list, int value, int key)
{
    bool n = False;
    int i;
    // 表未满， 位置合法， 才可插入
    if ((list->length < SIZE) && (-1 < key && key < list->length)){
        for (i=list->length; i != key; i--){
            list->data[i+1] = list->data[i]
        }
        list->data[key] = value;
        n = True;
        list->length++;
    }

    return n;
}

// 删除 key 位置元素
bool list_delete(seq_list* list, int key){
    int i;
    bool n = False;
    if (-1 < key && key < list->length){
        for (i=key; i<list->length-1; i++){
            list->data[i] = list->data[i+1];
        }
        list->length--;
    }

    return n;
}

// 追加元素
bool list_append(seq_list* list, int value)
{
    bool n = Flase;
    // 表未满， 就可以追加
    if (list->length < SIZE){
        list->data[list->length] = value;
        list->length++;
        n = True;
    }

    return n;
}

// 删除末尾元素
bool list_pop(seq_list* list)
{
    bool n = Flase;
    if (list->length != 0){
        list->length--;
    }
}

int main(){
    list_empty();

}