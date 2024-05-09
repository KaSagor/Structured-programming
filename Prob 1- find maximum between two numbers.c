//Write a C program to find maximum between two numbers.
#include<stdio.h>
int main()
{
    int n1,n2;

    printf("Enter your first integer number: ");
    scanf("%d",&n1);

    printf("Enter your second integer number: ");
    scanf("%d",&n2);

    if (n1>n2)
        {
            printf("%d is greater than %d", n1,n2);
        }
    else
        {
            printf("%d is greater than %d", n2,n1);
        }

    getch ();
    return 0;
}
