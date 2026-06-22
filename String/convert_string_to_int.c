#include <stdio.h>
int main()
{
    int n;
    char str[n];

    scanf("%d", &n);
    scanf("%s", str);

    int digit;
    int num = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        digit = str[i] - '0';
        num = num * 10 + digit;
    }
    printf("%d\n", num);

    return 0;
}