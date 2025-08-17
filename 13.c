#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,d,e;
    int c=1024;
    printf("In Bytes :");
    scanf("%f",&a);
    b=a/c;
    printf("In KB :%f\n",b);
    d=b/c;
    printf("In MB :%f\n",d);
    e=d/c;
    printf("In GB :%f\n",e);
    getch();
}