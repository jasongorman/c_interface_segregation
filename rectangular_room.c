//
// Created by Jason on 26/03/2019.
//

#include <stdlib.h>
#include <stdio.h>
#include "rectangular_room.h"
#include "floor_level.h"

struct Dimensions {
    float width;
    float length;
};

float rectangular_area(Room *room) {
    Dimensions *dimensions = room->dimensions;
    return dimensions->length * dimensions->width;
}

int rectangularFlightsOfStairs(Room *room){
    if(room->level == 'G'){
        return 0;
    }
    if(room->level == 'B'){
        return -1;
    }
    return room->level - '0';
}

Room* new_rectangular_room(char level, float width, float length){
    Dimensions* dimensions = malloc(sizeof(Dimensions));
    Room* room = malloc(sizeof(Room));
    dimensions->width = width;
    dimensions->length = length;
    room->dimensions = dimensions;
    room->level = level;
    room->area = &rectangular_area;
    room->flightsOfStairs = &rectangularFlightsOfStairs;
    return room;
}
