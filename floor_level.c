//
// Created by Jason on 06/05/2019.
//

#include <stdlib.h>
#include "floor_level.h"

IFloorLevel* asFloorLevel(IRoom *room){
    IFloorLevel *level = malloc(sizeof(IFloorLevel));
    level->this = room->this;
    level->flightsOfStairs = room->flightsOfStairs;
    return level;
}

