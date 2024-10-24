#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    double result = pow (x,y);
    printf("%.2lf",result);
}
