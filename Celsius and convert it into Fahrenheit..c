//Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit.
#include<stdio.h>
int main()
{
    float cel;
    printf("Enter your Celsius number : ");
    scanf("%f", &cel);

    float fah = ((cel * 9/5) + 32);
    //formula (0°C × 9/5) + 32 = 32°F

    printf("Your Fahrenheit number is: %.2f",fah);

    getch ();
    return 0;
}
