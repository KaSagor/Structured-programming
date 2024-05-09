//Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer number: ");
    scanf("%d",&n);

    if (n%5 == 0 && n%11 == 0)
    {
        printf("Your %d is divisible by both 5 and 11",n);
    }
    else if (n%5 == 0 || n%11 == 0)
    {
        if (n%5 == 0)
        {
            printf("Your %d is divisible by 5",n);
        }
        else
        {
            printf("Your %d is divisible by 11",n);
        }
    }
    else
    {
        printf("Your %d is not divisible by both 5 and 11",n);
    }
    getch ();
    return 0;
}

