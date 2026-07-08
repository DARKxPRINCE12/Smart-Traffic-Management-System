#include <stdio.h>
#include "../include/pedestrian.h"
#include "../include/config.h"

int pedestrianButtonPressed()
{
    int status;

    printf("Pedestrian request? (1=yes / 0=no): ");
    scanf("%d", &status);

    return status;
}

void handlePedestrianCrossing()
{
    printf("\nPedestrian crossing GREEN for %d seconds\n",
           PEDESTRIAN_TIME);
}