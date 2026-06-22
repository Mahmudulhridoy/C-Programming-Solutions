#include <stdio.h>
int main()
{
    int i;

    for (i = 100; i <= 300; i++)
    {

        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
        {
            printf("%d number is divisible\n", i);

            continue; // ekhane bolbe compiler k j erpr e ar kaj kora lagbe na, abar loop e back jete bolbe next iteration er kaj korar jonno, eitai continue er kaj
        }
        printf("%d number is  not divisible\n", i);
    }
} //break mane oi purapuri loop theke ber hobe jabe