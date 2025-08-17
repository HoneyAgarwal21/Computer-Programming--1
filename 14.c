#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,f,g;
    int c=9;
    int d=5;
    int e=32;
    printf("Temperature in celcius :");
    scanf("%f",&a);
    b=a*c;
    f=b/d;
    g=f+e;
    printf("Temperature in fahrenheit :%f\n",g);
    getch();
}