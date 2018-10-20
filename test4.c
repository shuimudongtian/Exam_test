//
// Created by z lin zhang on 2018/9/24.
//

#include <stdio.h>
int main(){
    int a[]={1,5,2,7,3};
    int len= sizeof(a)/ sizeof(int);
    for(int i=0;i<len;i++){
        for(int j=0;j<len-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n----------\n");

    int x=6;
    for(int i=0;i<6;i++){

        if(x<a[i]){
            for(int j=5;j>i;j--){
                a[j+1]=a[j];
            }
            a[i]=x;
            len++;
        }
    }



    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
     printf("%d",a[5]);

}