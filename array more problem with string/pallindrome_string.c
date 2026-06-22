#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    scanf("%s", str);
    int length = strlen(str);
    int p = 1;
    int i, j;
    for (i = length - 1, j = 0; i >= 0 && j < length / 2; i--, j++)

    // while(str[i]!='/0')
    {
        if (str[i] != str[j])
        {
            p = 0;
            break;
        }
    }
    if (p == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}