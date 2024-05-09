#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int rev=0;
    for(; n!=0;)
    {
        int
rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    printf("Reverse number: %d",rev);
    getch();
    return 0;
}
