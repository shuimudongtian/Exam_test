//
// Created by z lin zhang on 2018/9/24.
//

#include <stdio.h>

#include <stdlib.h>

int main()

{

    char s[300];int flag=0;

    int i;

    gets(s);

    for(i=0;s[i]!='\0';i++)

    {

        if(s[i]<='9'&&s[i]>'0')

        {

            flag=1;

            for(int j=i;s[j]!='\0';j++)

            {
                if(s[j]<='9'&&s[j]>='0')

                    printf("%c",s[j]);

            }

            break;

        }

    }

    if(flag==0)

    {

        printf("0");

    }

    printf("\n");

    return 0;

}
