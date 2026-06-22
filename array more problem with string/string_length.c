#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    printf("enter the test case value: ");
    scanf("%d", &n);
    if (n > 100)
    {
        return 1;
    }
    char str[n][101];

    int i;
    for (i = 0; i < n; i++)
    {
        printf("string no-%d: ", i + 1);
        scanf("%100s", str[i]);
    }

    int length;

    for (i = 0; i < n; i++)
    {
        length = strlen(str[i]);

        if (length <= 10)
        {
            printf("%s\n", str[i]);
        }

        else if (length > 10 && length < 101)
        {
            printf("%c%d%c\n", str[i][0], length - 2, str[i][length - 1]);
        }
        else
        {
            return 1;
        }
    }
}