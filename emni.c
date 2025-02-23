#include <stdio.h>
void hello()
{
    printf("fun\n");
    hello();
}
int main()
{
    hello();
}