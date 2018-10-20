//
// Created by z lin zhang on 2018/9/30.
//
#include <stdio.h>

//统计输入的一个字符串中数字和字母的个数，以换行结束输入。
void stringnumber(){
    char s;
    int n=0;
    int n1=0;
    printf("请输入字符串：");
    s=getchar();
    while (s!='\n'){
        if(s>='0'&&s<='9')
            n++;
        else
            n1++;
        s=getchar();
    }

    printf("您输入的字符串的数字个数为：%d\n",n);
    printf("您输入的字符串的字母个数为：%d\n",n1);
}

void stringnum(char a[],int len){
    int b[1000];
    char c[1000];
    for(int i=0;i<len;i++){
        if(a[i]>='0'&&a[i]<='9')
            b[i]=a[i];
        else
            c[i]=a[i];

    }

}



int main(){

stringnumber();


}