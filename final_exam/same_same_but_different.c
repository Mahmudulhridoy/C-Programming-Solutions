#include <stdio.h>
#include <string.h>

int main()
{
    char s1[105], s2[105], s3[105];
    scanf("%s %s %s", s1, s2, s3);

    int len = strlen(s1);
    int operations = 0;
    int i;
    for (i = 0; i < len; i++)
    {
        char a = s1[i], b = s2[i], c = s3[i];

        if (a == b && b == c)
        {
            operations += 0;
        }
        else if (a == b || b == c || a == c)
        {
            operations += 1;
        }
        else
        {
            operations += 2;
        }
    }

    printf("%d\n", operations);
    return 0;
}
