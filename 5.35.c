#include<stdio.h>
int main()
{
    double a,b,c,s,area;

    printf("enter 3 values:");
    scanf("%lf %lf %lf",&a,&b,&c);

    s=(a+b+c)/2;
    printf("s=%.2lf",s);

    area= sqrt (s*(s-a)*(s-b)*(s-c));
    printf("the area is=%.2lf\n",area);
}
