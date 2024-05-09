#include <stdio.h>
int main()
{
    char str[50], sub[50];
    int pos, len, c = 0;

    printf("Enter a string\n");
    gets(str);

    printf("Enter the position: \n");
    scanf("%d",&pos);
    printf("Enter length\n");
    scanf("%d",&len);

    while (c < len)
    {
        sub[c] = str[pos+c-1];
        c++;
    }
    sub[c] = '\0';

    printf("substring is \"%s\"\n", sub); // '\"' to print "

    return 0;
}
