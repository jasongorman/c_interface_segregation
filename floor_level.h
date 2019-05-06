//
// Created by Jason on 06/05/2019.
//

#ifndef ENCAPSULATION_FLOOR_LEVEL_H
#define ENCAPSULATION_FLOOR_LEVEL_H

#include "room.h"

typedef struct {
    RoomData *this;
    int (*flightsOfStairs)(RoomData*);
} IFloorLevel;

IFloorLevel* asFloorLevel(IRoom *room);

#endif //ENCAPSULATION_FLOOR_LEVEL_H
