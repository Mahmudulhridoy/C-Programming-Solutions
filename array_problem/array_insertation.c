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

    int index, value;
    scanf("%d %d", &index, &value);
    len++;
    // shift to right
    for (i = len - 1; i >= index; i--)
    {

        a[i + 1] = a[i];
    }
    a[index] = value;
    // print the updated array
    for (i = 0; i < len; i++)
    {

        printf("%d ", a[i]);
    }
}