#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    int i;
    for (i = ch; i < 'z'; i++)
    {

        printf("%c\n", i + 1);
        break;
    }
    if (ch == 'z')
    {
        printf("a\n");
    }
}