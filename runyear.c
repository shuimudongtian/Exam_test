//
// Created by z lin zhang on 2018/10/5.
//

#include <stdio.h>
#include <math.h>

//输出1900年到2000年之间的的闰年
void runyear(int year){
    for(int year=1900;year<=2000;year++){
        if((year%4==0)&&(year%100!=0)||(year%100==0)&&(year%400==0)){
            printf("%d\n",year);
        }
    }
}


//求解二元一次方程的根
void qiujiefunction(float a, float b, float c){
    float d=b*b-4*a*c;
    float dd=sqrt(d);

    if(d<0)
        printf("该方程无实数解\n");
    else if(d==0){
        printf("方程有两个相等的实根");
        float x=(-b)/(2*a);
        printf("x=%f",x);

    }
    else{
        printf("方程有两个不相等的实根");
        float x1=(-b+dd)/(2*a);
        float x2=(-b-dd)/(2*a);
        printf("x1=%f,x2=%d",x1,x2);
    }

}


//输入10个数中最大的树

void maxnumber(int a[],int len){
    for(int i=0;i<len;i++){
        for(int j=0;j<len-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%d",a[len-1]);
}


void gongyueshu (int m,int n){
    int r;
    r=m%n;
    if(r!=0){
        m=n;
        n=r;

    }
    printf("%d",n);

}
int main(){

gongyueshu(3,5);

}



