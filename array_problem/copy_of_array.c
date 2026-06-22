#include <stdio.h>
int main()
{

    int a[100000], b[100000];

    int length1 = 0, length2 = 0;
    scanf("%d", &length1);
    int i;
    for (i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("before copy\n");

    for (i = 0; i < length1; i++)
    {

        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
    a[2] = 100;

    printf("\n");
    for (i = 0; i < length1; i++)
    {
        b[i] = a[i];
    }

    printf("after copy\n");

    for (i = 0; i < length1; i++)
    {

        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
}