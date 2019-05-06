//
// Created by Jason on 06/05/2019.
//

#include <stdlib.h>
#include "floor_level.h"

FloorLevel* asFloorLevel(Room *room){
    FloorLevel *level = malloc(sizeof(FloorLevel));
    level->room = room;
    level->flightsOfStairs = room->flightsOfStairs;
    return level;
}

