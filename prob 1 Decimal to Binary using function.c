#include<stdio.h>

void number(int num);
int a[10];
static int i;

int main()
{
    int n;
    printf("Enter decimal number: ");
    scanf("%d", &n);
    number(n);
    printf("Binary of %d is = ",n);
    for(i=(i-1); i>=0; i--)
        printf("%d", a[i]);

    getch();
    return 0;
}
void number(int num)
{
    while(num!=0)
    {
        a[i] = num%2;
        i++;
        num = num/2;
    }
}
