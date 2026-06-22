#include <stdio.h>
int main()
{

    char X;
    scanf("%c", &X);
    int difference = 0;

    if (X >= 'a' && X <= 'z')
    {

        printf("%c\n", X - 32);
    }
    if (X >= 'A' && X <= 'Z')
    {
        printf("%c\n", X + 32);
    }
}