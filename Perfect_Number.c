#include<stdio.h>
int main()
{
    int i,number,sum=0;
    scanf("%d",&number);
    for(i=1;i<number;i++)
    {
        if(number %i==0)
            sum=sum+i;
    }
    if(sum==number)
     printf("True");
     else
     printf("False");
     return 0;
}