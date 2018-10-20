//
// Created by z lin zhang on 2018/10/3.
//

#include <stdio.h>

Insernumber(int a[],int x,int len){
    for(int i=0;i<len;++i){
        if(x<a[i]){
           for(int j=i;j<len;j++){
               a[j+1]=a[j];
           }
           a[i]=x;
        }
        ++len;
    }

    for(int i=0;i<len-1;i++){
        printf("%d",a[i]);

    }

}


void maopao(int a[],int len){
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
}

int main(){
    int b[7]={5,7,2,3,7,9,1};
    maopao(b[7],7);
    printf("排序后的数组为：\n");
    for(int i=0;i<7;i++){
        printf("%d",b[i]);
    }
    Insernumber(b[7],6,7);
    for(int i=0;i<7;i++){
        printf("%d",b[i]);
    }
}