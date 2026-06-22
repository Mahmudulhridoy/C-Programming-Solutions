#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001], b[1001], c[1001];
    scanf("%s %s %s", a, b, c);

    char min[1001];
    if (strcmp(a, b) < 0)
    {
        strcpy(min, a);
    }
    else
    {
        strcpy(min, b);
    }
    if (strcmp(min, c) > 0)
    {
        strcpy(min, c);
    }

    char max[1001];
    if (strcmp(a, b) > 0)
    {
        strcpy(max, a);
    }
    else
    {
        strcpy(max, b);
    }
    if (strcmp(max, c) < 0)
    {
        strcpy(max, c);
    }

    printf("%s\n", min);
    printf("%s\n", max);
}