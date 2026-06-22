#include <stdio.h>
int main()
{

    char str[50];
    printf("enter the string: ");
    scanf("%[^\n]s", str);

    int length = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("the length of the string: %d", length);
}