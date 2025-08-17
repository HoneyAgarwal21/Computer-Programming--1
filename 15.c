#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,f,g;
    int c=9;
    int d=5;
    int e=32;
    printf("Temperature in fahrenheit :");
    scanf("%f",&a);
    g=a-e;
    b=g/c;
    f=b*d;
    printf("Temperature in celcius :%f\n",f);
    getch();
}