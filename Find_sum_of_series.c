#include<stdio.h>
int main()
{
    int i,n;
    float s=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            s=s+1/(float)i;
        }
        if(i==n)
        {
            s=s+1/(float)i;
        }
    }
    printf("%.2f",s);
    return 0;
}