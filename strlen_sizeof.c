//
// Created by z lin zhang on 2018/10/15.
//
/*
#include <stdio.h>
#include <memory.h>

#define 嘿嘿 main
#define 整数 int
#define 打印 printf
const int a=8;
#define 字符 char
整数 嘿嘿(){
    整数 a=9,b=7;
    打印("a=%%d,b=%d\n",a,b);
    打印("%d\n\a",b);
    int s[a];

}
 * */
//交换a、b的值
#include<stdio.h>
void swap(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d,b=%d",a,b);

}



int main()
{
    int a=3;
    int b=4;
    swap(a,b);


}


