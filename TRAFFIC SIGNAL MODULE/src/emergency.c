#include <stdio.h>
#include "../include/emergency.h"

int detectEmergencyVehicle()
{
    int status;

    printf("Emergency vehicle detected? (1=yes / 0=no): ");
    scanf("%d", &status);

    return status;
}

void handleEmergencyVehicle()
{
    printf("\n*** EMERGENCY MODE ACTIVATED ***\n");
    printf("All signals RED except emergency lane GREEN\n");
}