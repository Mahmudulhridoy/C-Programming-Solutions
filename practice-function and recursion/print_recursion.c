#include <stdio.h>

void print(int n)
{
    if (n < 1)
    {
        return;
    }
    printf("I love Recursion\n");
    print(n - 1);
}
int main()
{

    int n;
    scanf("%d", &n);
    if (n > 100 || n < 1)
    {
        return 1;
    }
    print(n);
}