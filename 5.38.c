#include<stdio.h>
int main()
{
    float length,width,area;

    printf("enter length:");
    scanf("%f",&length);

    printf("enter width:");
    scanf("%f",&width);

    area=(length*width);

    printf("the area is=%.2f\n",area);
}
