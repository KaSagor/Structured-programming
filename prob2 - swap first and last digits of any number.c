#include<stdio.h>
int main()
{
    int n,n1=0,n2,rem,r=0;
    printf("Enter any number: ");
    scanf("%d", &n);

    int temp = n;
    while(temp>0)
    {
        temp = temp/10;
        n1++;
    }

    if(n1==1)
    {
        temp = n;
        while(temp>0)
        {
            rem = temp%10;
            r = (r*10)+rem;
            temp = temp/10;
        }
        printf("\nExchange number = %d", r);
    }
    else
    {
        temp = n;
        while(temp>0)
        {
            rem = temp%10;
            r = (r*10)+rem;
            temp = temp/10;
        }

        int r1 = r;
        r = 0;
        temp = n;
        n2 = n1;
        while(temp>0)
        {
            int n3 = r1%10;
            if(n2==n1)
            {
                rem = temp%10;
                r = (r*10)+rem;
            }
            else if(n2==1)
            {
                rem = temp%10;
                r = (r*10)+rem;
            }
            else
            {
                r = (r*10)+n3;
            }
            temp = temp/10;
            r1 = r1/10;
            n2--;
        }
        printf("\nExchange Number = %d", r);
    }
    getch();
    return 0;
}
