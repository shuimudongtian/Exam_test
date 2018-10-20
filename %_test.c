//
// Created by z lin zhang on 2018/10/12.
//

#include <stdio.h>
int main(){

    int a;
   // printf("%p\n",a);    //scanf的输入是必须要与其括号内写的格式化输入完全一致的。
                         //字符用的是单引号'',比如:char a='A';
    int *p=&a;
    *p=1;
    printf("%d\n",*p);
    int d[5]={2,5,1,7,8};
    int *pi=&d[0];
    int *po=d;
    printf("%p\n",pi);     //数组名代表数组首元素的地址，不代表整个数组元素。
    printf("%p",po);      //数组名的地址==其首元素的地址；





}
