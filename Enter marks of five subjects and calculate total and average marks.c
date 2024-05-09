//Write a C program to enter marks of five subjects and calculate total and average marks.
#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    printf("Enter marks of your first subject: ");
    scanf("%d",&n1);

    printf("\nEnter marks of your second subject: ");
    scanf("%d",&n2);

    printf("\nEnter marks of your third subject: ");
    scanf("%d",&n3);

    printf("\nEnter marks of your fourth subject: ");
    scanf("%d",&n4);

    printf("\nEnter marks of your fifth subject: ");
    scanf("%d",&n5);

    float total = n1+n2+n3+n4+n5;
    float average = total / 5;

    printf("\n\nYour total marks is: %.0f",total);
    printf("\nyour average marks is: %.2f",average);

    getch ();
    return 0;
}
