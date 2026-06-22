#include <stdio.h>
#include <string.h>
int main()
{
    char c[10];
    char b[10] = "abcdef";
    /*int length = strlen(b);
     int i;
     for (i = 0; i < length; i++)
     {

         c[i] = b[i];
     }
     c[length] = '\0';*/

    strcpy(c, b);
    // strcpy(c,fuck you);
    printf("%s %s", c, b);
}