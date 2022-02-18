#include<stdio.h>
int main()
{
    int num1,num2,LCM,Temp,GCD;
    scanf("%d%d",&num1,&num2);
    int a=num1;
    int b=num2;
    while(num2!=0)
    {
        Temp=num2;
        num2=num1%num2;
        num1=Temp;
    }
    GCD=num1;
    LCM=(a*b)/GCD;
    printf("%d",LCM);
    return 0;
}