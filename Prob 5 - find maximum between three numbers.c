//Write a C program to find maximum between three numbers.
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter your first integer number: ");
    scanf("%d",&n1);

    printf("Enter your second integer number: ");
    scanf("%d",&n2);

    printf("Enter your third integer number: ");
    scanf("%d",&n3);

    if (n1>n2 && n1>n3)
    {
        printf("%d is the maximum number",n1);
    }
    else if (n2>n1 && n2>n3)
    {
        printf("%d is the maximum number",n2);
    }
    else
    {
        printf("%d is the maximum number",n3);
    }
    getch ();
    return 0;
}
