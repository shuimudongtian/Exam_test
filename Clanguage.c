//
// Created by z lin zhang on 2018/9/30.
//

/*
 * C语言本身没有输入输出语句，其输入输出是调用库函数实现的
 * a为int型数组或者字符型数组
 * sizeof(a)/sizeof(int)
 * sizeof(a)/sizeof(char)
 * 负数求补码，先写出其绝对值的二进制形式，然后对其后面所有的二进制位按位取反，再加1.
 * 0正1负，对于无符号数用%u输出。
 * 强制类型转换，（float）a,shuju
 * sizeof()和strlen的区别，sizeof是运算符，在编译的时候就计算好了，strlen是函数，只有在运行后才会计算出结果。
 * */

#include <stdio.h>
void scanfa(int a[],int maxlen){
    for(int i=0;i<maxlen;++i){
        scanf("%d",&a[i]);
    }
}



int main(){
    printf("\a");
    scanf(int a[],6);
    maopao(int a[],6);

}

