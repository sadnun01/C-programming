#include<stdio.h>
int main ()
{
    char ch;

    printf("Enter any letter : ");
    scanf("%C",&ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel\n");
        break;

    default:
        printf("Consonent");
    }

    getch();

}

