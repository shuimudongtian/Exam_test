//
// Created by z lin zhang on 2018/10/3.
//

#include <stdio.h>
int main(){

    int a,b,c;
    int m=100*a+10*b+c;
    int n=100*b+11*c;
    for(a=1;a<10;a++){
        for(b=1;b<10;b++){
            for(c=0;c<10;c++){
                if((100*a+110*b+12*c)==532)
                    printf("%d %d %d\n",a,b,c);

            }
        }
    }

}


//a b c问题  ，即输出满足abc+bcc=532的所有a b c 的数值。








