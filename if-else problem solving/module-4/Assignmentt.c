#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y, z, total;
    scanf("%d %d %d", &x, &y, &z);
    if (x >= 0 && x <= 1000 && y >= 0 && y <= 1000 && z >= 0 && z <= 1000)
    {
        total = x + y + z;
        printf("%d\n", total);
    }
    else
    {
        printf("please input value of x,y,z between 0 to 1000");
    }

    return 0;
}
