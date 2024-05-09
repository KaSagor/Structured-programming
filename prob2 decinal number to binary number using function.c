#include <stdio.h>
int convert(int n);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Binary number of %ld is %d", num, convert(num));

    getch();
    return 0;
}

/* Function to convert a decinal number to binary number */
int convert(int n)
{
    int remainder;
    int binary = 0, i = 1;

    while(n != 0)
    {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}
