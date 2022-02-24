#include<stdio.h>
int main()
{
    int a,sum=0,m=1,remain;
    scanf("%d",&a);
    while(a!=0)
    {
        remain=a%10;
        sum=sum+remain;
        m=m*remain;
        a=a/10;
    }
    printf("%d",(m-sum));
}