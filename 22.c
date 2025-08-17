#include<stdio.h>
void main()
{
    float b=0.1,c,d,a;
    printf("Gross Sales :");
    scanf("%f",&a);
    //discount
    c=a*b;
    //Net sales
    d=a-c;
    printf("Net Sales :%f",d);
}