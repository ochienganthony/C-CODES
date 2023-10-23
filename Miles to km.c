#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int miles = 0;

    while (miles <= 1000)
    {
        double kilometers = miles * 1.60934; // Conversion factor: 1 mile = 1.60934 kilometers
        printf("%d Miles = %.2f Kilometers\n", miles, kilometers);
        miles += 100;
    }

    return 0;
}

