//
// Created by z lin zhang on 2018/9/24.
//

#include <stdio.h>
int main(){
    int a[]={1,6,2,8,6,9,3,1,2};
    int len= sizeof(a)/ sizeof(int);
    int x=2;
    int e=a[x];
    //删除
    for(int i=2;i<len;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(int i=0;i<len+1;i++){
        printf("%d ",a[i]);88
    }


    printf("\n\n");

    //插入，有问题
    int y=5;
    for(int i=0;i<len;i++){
        if(y<a[i]){
            ++len;
            for(int j=len+1;j>=i;--j){
                a[j+1]=a[j];
            }
        }
        a[i]=y;

    }

    for(int i=0;i<len+1;i++){
        printf("%d ",a[i]);
    }

}
