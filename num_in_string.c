//
// Created by z lin zhang on 2018/10/8.
//

#include<stdio.h>
int main()
{
    char str[1000];//保存读取到的字符串
    long sum=0,data[1000];
    int i=0,top=0;
    printf("输入字符串：\n");
    scanf("%s",str);
    while(str[i]!='\0')//未到字符串末尾
    {
        if(str[i]>='0'&&str[i]<='9')//如果是数字
            sum=sum*10+(str[i]-'0');//连续数字转换为数.
        else
        if(sum!=0)//保存这个数
        {
            data[top++]=sum;
            sum=0;
        }
        i++;
    }
    if(sum!=0)//判断最后一个字符是否是数
        data[top++]=sum;
    printf("字符串中的数字是：\n");
    i=0;

    for(int i=0;i<top;i++){
        for(int j=0;j<top-1-i;j++){
            if(data[j]>data[j+1]){
                int temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }

    while(i<top)
    {

        printf("%ld",data[i]);
        if(i<top-1)//不打印最后一个逗号
            printf(",");
        i++;
    }
    printf("\n");
    return 0;
}