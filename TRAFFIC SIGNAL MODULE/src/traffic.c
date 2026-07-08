#include <stdio.h>
#include "../include/traffic.h"
#include "../include/config.h"

void setGreenLight(int duration)
{
    printf("GREEN light ON for %d seconds\n", duration);
}

void calculateTrafficTiming(int density)
{
    if(density < 30)
    {
        setGreenLight(LOW_TRAFFIC_TIME);
    }
    else if(density < 70)
    {
        setGreenLight(MEDIUM_TRAFFIC_TIME);
    }
    else
    {
        setGreenLight(HIGH_TRAFFIC_TIME);
    }
}