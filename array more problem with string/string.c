#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];

    scanf("%10s\n%10s", a, b);

    int len1, len2;
    len1 = strlen(a);
    len2 = strlen(b);
    printf("%d %d\n", len1, len2);

    printf("%s%s\n", a, b);
    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s", a, b);
}