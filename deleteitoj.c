//
// Created by z lin zhang on 2018/9/24.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


void maomao(int a[],int len){
    for(int i=0;i<len;i++){
        for(int j=0;j<len-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}

void display(int a[],int len){

    for(int i=0;i<len;i++){
        printf("%-5d",a[i]);
    }
    printf("\n");
}

void delete(int a[],int len,int x){
    for(int i=0;i<len;++i){
        if(x==a[i]){
            for(int j=i;j<len;j++){
                a[j]=a[j+1];
            }
        }


    }
    --len;

}

int main(){
    int a[]={5,7,9,1,3,2,1,653,8,9};
    printf("要操作的数组是：");
    display(a,SIZE);
    printf("排序后的数组是：");
    maomao(a,SIZE);
    display(a,SIZE);
    delete(a,10,653);
    printf("删除后的数组是：");
    display(a,9);
    signed i=1;

}
