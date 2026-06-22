#include <stdio.h>
int main()
{

    char letter;
    scanf("%c", &letter);

    if (letter >= 48 && letter <= 57)
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");

        if (letter >= 65 && letter <= 90)
        {
            printf("IS CAPITAL\n");
        }
        else if (letter >= 97 && letter <= 122)
        {
            printf("IS SMALL");
        }
    }
}