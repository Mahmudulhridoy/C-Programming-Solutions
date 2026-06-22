#include <stdio.h>

int a[100000];
int main()
{

    int len;
    scanf("%d", &len);

    int i;
    for (i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    int index;
    scanf("%d", &index);
    for (i = index; i < len - 1; i++)
    {

        a[i] = a[i + 1];
    }
    len--;
    for (i = 0; i < len; i++)
    {

        printf("%d ", a[i]);
    }
}