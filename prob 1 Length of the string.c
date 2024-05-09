#include <stdio.h>
int main()
{
    char s[100];
    int i;
    printf("write something: \n");
    gets(s);

    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of the string: %d", i);

    getch();
    return 0;
}
