//
// Created by z lin zhang on 2018/9/29.
//

/*快排的算法思想大概分为如下三步：
1、选择一个基准数；
2、将比该基准数小的数放在数组的左边，将比基准数大的数放在数组的右边；
3、重复步骤2，直到各区间只剩一个数。
*/
#include <stdio.h>
#include <stdlib.h>


void display(int a[],int len){
    for(int i=0;i<len;i++){
        printf("%-3d",a[i]);
    }
    printf("\n");
}

void swap(int *a,int *b){
    int temp,i,j;
    if(*a>*b){
        temp=*a;
        *a=*b;
        *b=temp;
    }


}




void quicksort(int array[],int maxlen,int begin,int end) {
    int i, j;
    if(begin < end) {
        i = begin + 1;
        j = end;
        while (i < j) {
            if (array[i] > array[begin]) {
                swap(&array[i], &array[j]);  // 交换两个数
                j--;
            }
            else {

                i++;  // 将数组向后移一位，继续与基准数比较。
            }
        }
        if (array[i] >= array[begin]) {
            i--;

        }
        swap(&array[begin], &array[i]);  // 交换array[i]与array[begin]
        quicksort(array, maxlen, begin, i);
        quicksort(array, maxlen, j, end);




    }
}

int main(){
    const int maxlen=8;
    int a[maxlen]={8,1,4,2,5,8,9,8};
    printf("排序之前的数组是：\n");
    display(a,maxlen);
    quicksort(a,8,0,7);
    printf("排序之后的数组是:\n");
    display(a,maxlen);



}