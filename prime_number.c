#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}