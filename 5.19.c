#include<stdio.h>
int main()

{
    char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);

    printf("The uppercase letter : %c\n",lower-32);
}
