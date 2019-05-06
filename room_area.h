//
// Created by Jason on 06/05/2019.
//

#ifndef ENCAPSULATION_ROOM_AREA_H
#define ENCAPSULATION_ROOM_AREA_H

#include "room.h"

typedef struct {
    RoomData *this;
    float (*area)(RoomData*);
} IRoomArea;

IRoomArea* asArea(IRoom *room);

#endif //ENCAPSULATION_ROOM_AREA_H
