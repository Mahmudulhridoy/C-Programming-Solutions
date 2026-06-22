#include <stdio.h>
int main()
{

    char str[100000];
    scanf("%100000s", str);

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] == ',')
        {
            str[i] = ' ';
        }
        printf("%c", str[i]);
        i++;
    }
}