#include<stdio.h>
int main()
{
    int r;
    float a,p,pi=3.14;
    scanf("%d",&r);
    a=pi*r*r;
    p=2*pi*r;
    printf("%.2f\n%.2f",a,p);
    return 0;
}