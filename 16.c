#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,d;
    printf("Prinicipal Amount :");
    scanf("%f",&a);
    printf("Rate :");
    scanf("%f",&b);
    printf("Tenure in years :");
    scanf("%f",&c);
    d=a*b*c/100;
    printf("Interest Rate :%f",d);
    getch();
}