/*
*   Assignment 6
*   Name:鈕愷夏
*   Student Number:107403527
*   Course 2019-CE1001
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ptr;
    int num[100];
    char target[100];
    int b=0;
    int counter=0;
    char a[100];

    scanf("%d",&counter);

    for(int i=0;i<counter;i++)
    {
        b=0;
        scanf("%s",a);
        ptr=a;

        while(*ptr!=NULL)
        {
            target[b]=*ptr;
            ptr++;
            num[b++]= strtol(ptr, &ptr, 10);
        }

        for(int k=0;k<b;k++)
        {
            for(int j=0;j<num[k];j++)
            {
                printf("%c",target[k]);
            }
        }

        for(int a=0;a<100;a++)
        {
            num[a]=0;
            target[a]='0';
        }

        if(i!=counter-1)
            printf("\n");
    }
    printf("\n");
}
