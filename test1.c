//
// Created by z lin zhang on 2018/9/24.
//

#include <stdio.h>
void stoi1(){


}

int main(){

    char a[]="abc123de45f*#6?*789&";
    int len= sizeof(a)/ sizeof(char);
   // printf("%d",len);
    for(int i=0;i<19;i++){

        if(a[i]>122||a[i]<32){
            a[i]=' ';

        }
    }
    int leng= sizeof(a)/ sizeof(char);
    for(int j=0;j<leng;j++){
        printf("%d",a[j]);
    }


    return 0;

}

