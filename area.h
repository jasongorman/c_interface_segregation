//
// Created by Jason on 06/05/2019.
//

#ifndef ENCAPSULATION_ROOM_AREA_H
#define ENCAPSULATION_ROOM_AREA_H

#include "room.h"

typedef struct {
    Room *room;
    float (*area)(Room*);
} Area;

Area* asArea(Room *room);

#endif //ENCAPSULATION_ROOM_AREA_H
