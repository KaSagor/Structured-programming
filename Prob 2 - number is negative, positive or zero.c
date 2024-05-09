//Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter your integer number: ");
    scanf("%d",&n);

    if (n>0)
    {
        printf("your %d number is positive",n);
    }
    else if (n<0)
    {
        printf("Your %d number is negative",n);
    }
    else
    {
        printf("Your number is ZERO");
    }
    getch ();
    return 0;
}
