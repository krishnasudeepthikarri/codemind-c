#include<stdio.h>
int main()
{
    double a,b,product;
    scanf("%lf%lf",&a,&b);
    // calculating product
    product=a*b;
    // %.2f displays number up to 2 decimal point
    printf("%.2f",product);
    return 0;
}