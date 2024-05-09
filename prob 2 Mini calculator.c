#include<stdio.h>
void display(int n1, int n2, char ch, int result);
void add(int n1, int n2);
void subtract(int n1, int n2);
void multiply(int n1, int n2);
void divide(float n1, float n2);


int main()
{
    int n1, n2;
    int ch;

    do
    {
        printf("Enter two numbers: \n");
        scanf("%d %d", &n1, &n2);

        printf("\npress 1 for Addition");
        printf("\npress 2 for Subtraction");
        printf("\npress 3 for Multiplication");
        printf("\npress 4 for Division");
        printf("\npress 5 for Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            add(n1,n2);
            break;
        case 2:
            subtract(n1,n2);
            break;
        case 3:
            multiply(n1,n2);
            break;
        case 4:
            divide(n1,n2);
            break;
        case 5:
            printf("Thank You.");
            exit(0);
        default:
            printf("Invalid number");
            printf("Please enter correct number");
        }
    }
    while(1);
    return 0;
}

void display(int n1, int n2, char ch, int result)
{
    printf("%d %c %d = %d\n", n1, ch, n2, result);
}

void add(int n1, int n2)
{
    int result = n1 + n2;
    display(n1, n2, '+', result);
}


void subtract(int n1, int n2)
{
    int result = n1 - n2;
    display(n1, n2, '-', result);
}

void multiply(int n1, int n2)
{
    int result = n1 * n2;
    display(n1, n2, '*', result);
}

void divide(float n1, float n2)
{
    float result = n1 / n2;
    display(n1, n2, '/', result);
}
