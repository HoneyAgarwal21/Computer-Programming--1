#include<stdio.h>
void main()
{
    int a=2;
    float b,c,d,e,f;
    printf("Length of a rectangle :");
    scanf("%f",&b);
    printf("Breadth of a rectangle :");
    scanf("%f",&e);
    c=b*e;
    printf("Area of rectangle :%f\n",c);
    f=b+e;
    d=f*a;
    printf("Perimeter of rectangle :%f\n",d);
}