//
// Created by Jason on 26/03/2019.
//

#include <stdlib.h>
#include "circular_room.h"

struct RoomData {
    float radius;
    char level;
};

int circularFlightsOfStairs(RoomData *this){
    if(this->level == 'G'){
        return 0;
    }
    if(this->level == 'B'){
        return -1;
    }
    return this->level - '0';
}

float circular_area(RoomData *this) {
    float radius = this->radius;
    return (2 * radius) * (2 * radius);
}

IRoom* new_circular_room(char level, float radius){
    RoomData* this = malloc(sizeof(RoomData));
    this->radius = radius;
    this->level = level;
    IRoom* room = malloc(sizeof(IRoom));
    room->this = this;
    room->area = &circular_area;
    room->flightsOfStairs = &circularFlightsOfStairs;
    return room;
}