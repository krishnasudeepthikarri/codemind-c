#include<stdio.h>
int main()
{
    int l,r,k,s,count=0;
    scanf("%d%d%d",&l,&r,&k);
    for(s=l;s<=r;s++)
    {
        if(s%k==0)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}