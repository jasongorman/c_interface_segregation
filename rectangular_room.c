//
// Created by Jason on 26/03/2019.
//

#include <stdlib.h>
#include <stdio.h>
#include "rectangular_room.h"
#include "floor_level.h"

struct RoomData {
    float width;
    float length;
    char level;
};

float rectangular_area(RoomData *this) {
    return this->length * this->width;
}

int rectangularFlightsOfStairs(RoomData *this){
    if(this->level == 'G'){
        return 0;
    }
    if(this->level == 'B'){
        return -1;
    }
    return this->level - '0';
}

IRoom* new_rectangular_room(char level, float width, float length){
    RoomData* this = malloc(sizeof(RoomData));
    IRoom* room = malloc(sizeof(IRoom));
    this->width = width;
    this->length = length;
    this->level = level;
    room->this = this;
    room->area = &rectangular_area;
    room->flightsOfStairs = &rectangularFlightsOfStairs;
    return room;
}
