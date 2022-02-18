#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,j,t,len=0;
    for(i=0;str[i]!=NULL;i++)
    {
        len=len+1;
    }
    i=0;
    j=len-1;
    while(i<j)
    {
        t=str[j];
        str[j]=str[i];
        str[i]=t;
        i++;
        j--;
    }
    printf("%s",str);
}