#include<stdio.h>
void main()
{
    float a=0.1,b=0.03,c,d,e,f;
    printf("Gross Salary :");
    scanf("%f",&c);
    //allowances
    d=c*a;
    //deductions
    e=c*b;
    //Net salary
    f=c-d-e;
    printf("Net Salary :%f",f);
}