#include<stdio.h>
int main()

{
    int num1,num2,num3,sum;
    float avg;

    printf("enter 3 numbers=");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum = num1+num2+num3;

    avg = (float)sum/3;
    printf("THE RESULTS ARE:%d, %.1f\n",sum,avg);

}
