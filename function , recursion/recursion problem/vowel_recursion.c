#include <stdio.h>

int countVowels(char *s, int index)
{
    if (s[index] == '\0')
        return 0;

    char ch = s[index];

    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;

    int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

    return isVowel + countVowels(s, index + 1);
}

int main()
{
    char s[201];
    fgets(s, sizeof(s), stdin);

    printf("%d\n", countVowels(s, 0));
}
