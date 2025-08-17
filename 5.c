#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,w,e;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    c=a+b;
    printf("Sum=%d\n",c); 
    w=a-b;
    printf("Difference=%d\n",w);
    e=a*b;
    printf("Product=%d\n",e);
    c=a/b;
    printf("Quotient=%d\n",c);
    getch();
}