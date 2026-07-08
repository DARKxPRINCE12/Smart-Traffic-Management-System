#include <stdio.h>
#include "../include/congestion.h"
#include "../include/config.h"

void detectCongestion(int density)
{
    if(density >= CONGESTION_THRESHOLD)
    {
        printf("\n!!! CONGESTION DETECTED !!!\n");
        printf("Traffic diversion recommended\n");
    }
    else
    {
        printf("Traffic flow normal\n");
    }
}