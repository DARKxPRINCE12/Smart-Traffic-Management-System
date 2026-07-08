#include <stdio.h>

#include "../include/traffic.h"
#include "../include/sensor.h"
#include "../include/emergency.h"
#include "../include/pedestrian.h"
#include "../include/congestion.h"

int main()
{
    int density;

    printf("====================================\n");
    printf(" ADAPTIVE TRAFFIC CONTROL SYSTEM\n");
    printf("====================================\n");

    while(1)
    {
        density = getVehicleDensity();

        detectCongestion(density);

        if(detectEmergencyVehicle())
        {
            handleEmergencyVehicle();
        }
        else
        {
            calculateTrafficTiming(density);
        }

        if(pedestrianButtonPressed())
        {
            handlePedestrianCrossing();
        }

        printf("\nCycle Completed\n\n");

        int choice;

        printf("Continue simulation? (1=yes / 0=no): ");
        scanf("%d", &choice);

        if(choice == 0)
        {
            break;
        }
    }

    printf("\nSystem Shutdown\n");

    return 0;
}