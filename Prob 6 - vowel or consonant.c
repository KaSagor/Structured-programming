/*Write a Program to take the value from the user as input any alphabet and check whether it is vowel or
consonant (Using the switch statement).*/
#include<stdio.h>
int main()

{
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);

    switch(ch)
    {
    case 'a':
        printf("Your '%c' is a Vowel",ch);
        break;
    case 'e':
        printf("Your '%c' is a Vowel",ch);
        break;
    case 'i':
        printf("Your '%c' is a Vowel",ch);
        break;
    case 'o':
        printf("Your '%c' is a Vowel",ch);
        break;
    case 'u':
        printf("Your '%c' is a Vowel",ch);
        break;
    case 'A':
        printf("Your '%c' is a Vowel",ch);
        break;
    case 'E':
        printf("Your '%c' is a Vowel",ch);
        break;
    case 'I':
        printf("Your '%c' is a Vowel",ch);
        break;
    case 'O':
        printf("Your '%c' is a Vowel",ch);
        break;
    case 'U':
        printf("Your '%c' is a Vowel",ch);
        break;

    default:
        printf("Your '%c' is a Consonant",ch);
    }

    getch ();
    return 0;
}
