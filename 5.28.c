#include<stdio.h>
int main()
{
    int num1,num2,result;

    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    result= num1 + num2;
    printf("the sum is = %d\n",result);

    result= num1 - num2;
    printf("the sub is = %d\n",result);

    result= num1 * num2;
    printf("the mal is = %d\n",result);

    result= num1 / num2;
    printf("the div is = %d\n",result);

    result= num1 % num2;
    printf("the reminder is = %d\n",result);

    getch();
}
