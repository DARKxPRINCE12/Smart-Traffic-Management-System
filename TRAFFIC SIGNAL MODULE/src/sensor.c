#include <stdio.h>
#include <stdlib.h>
#include "../include/sensor.h"

int getVehicleDensity()
{
    int density;

    printf("Enter vehicle density (0-100): ");
    scanf("%d", &density);

    if(density < 0)
        density = 0;

    if(density > 100)
        density = 100;

    return density;
}