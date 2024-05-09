#include<stdio.h>
int main()
{
   int n, sum=0;

   printf("Enter n value: ");
   scanf("%d",&n);

   for(int i=1; i<=n; i++)
   {
     sum += i; //sum = sum + i;
   }

   printf("sum of the series = %d",sum);

   getch ();
   return 0;
}
