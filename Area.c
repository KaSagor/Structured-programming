//Write a C Program to Calculate Area of a Square, take length of one side as user input.
#include<stdio.h>
int main()
{
    float length;

    printf("Enter length: ");
    scanf("%f",&length);

    float area = length* length;

    printf("Your area of square is: %.2f",area);
    getch();
    return 0;
}
