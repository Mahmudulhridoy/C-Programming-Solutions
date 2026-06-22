#include <stdio.h>
void add(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    add(a, b);
}