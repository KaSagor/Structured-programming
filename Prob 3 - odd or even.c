//Write a C program to check whether a given number is odd or even.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a integer number: ");
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("Your %d is an even number",n);
    }
    else
    {
        printf("Your %d is an odd number",n);
    }
    getch ();
    return 0;
}
