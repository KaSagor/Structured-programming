//Write a C program to enter temperature in Fahrenheit(°F) and convert it into Celsius(°C).
#include<stdio.h>
int main()
{
    float fah;
    printf("Enter your Fahrenheit number : ");
    scanf("%f", &fah);

    float cel = ((fah - 32) * 5/9);
    //formula (°F − 32) × 5/9 = °C


    printf("Your Celsius number is: %.2f",cel);

    getch ();
    return 0;
}
