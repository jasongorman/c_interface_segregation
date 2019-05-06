//
// Created by Jason on 25/03/2019.
//

#ifndef ENCAPSULATION_ROOM_H
#define ENCAPSULATION_ROOM_H

typedef struct RoomData RoomData;

typedef struct {
    RoomData *this;
    float (*area)(RoomData*);
    int (*flightsOfStairs)(RoomData*);
} IRoom;

#endif //ENCAPSULATION_ROOM_H
