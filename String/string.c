#include <stdio.h>
int main()
{

    char str[] = "bangladesh is a \"beautiful\" coun\\try";
    // scanf("%[^\n]s", str);

    /*fgets(str, sizeof(str), stdin);
fputs(str, stdout);*/

    printf("%s", str);
}