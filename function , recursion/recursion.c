#include <stdio.h>
/*void normal(int x, int n)
{
    if (x > n)
    {
        return;
    }

    printf("%d\n", x);
    normal(x + 1, n);
}*/

void reverse(int n, int x)
{
    if (n < 1)
    {
        return;
    }
    printf("%d ", n);

    reverse(n - 1, x);
}

int main()
{

    int n;
    // printf("enter the value of n: ");
    scanf("%d", &n);
    // normal(1, n);
    //  printf("\n");
    reverse(n, 1);
}