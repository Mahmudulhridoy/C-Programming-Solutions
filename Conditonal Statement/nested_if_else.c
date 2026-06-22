#include <stdio.h>
#include <stdbool.h>
int main()
{

    int tour_duration;
    scanf("%d", &tour_duration);

    if (tour_duration == 2)
    {
        bool isBoatavailable = true;
        if (isBoatavailable)
        {
            printf("we are going to tanguar haor");
        }
        else
        {
            printf("we are going to sreemangal");
        }
    }
    else if (tour_duration == 4)
    {
        bool isShipavailable = true;
        if (isShipavailable)
        {
            printf("we are going to saint-martin");
        }
        else
        {
            printf("we are going to cox's bazar");
        }
    }
    return 0;
}
