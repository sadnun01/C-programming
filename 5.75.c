#include<stdio.h>
int main ()
{
    char ch;

    printf("ENTER ANY LETTER : ");
    scanf ("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("Small letter");

    else if(ch>='A' && ch<='Z')
        printf("Capital letter");

    else
        printf("Not a letter");

    getch();

}
