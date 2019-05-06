//
// Created by Jason on 26/03/2019.
//

#include <stdlib.h>
#include "circular_room.h"

struct Dimensions {
    float radius;
};

int circularFlightsOfStairs(Room *room){
    if(room->level == 'G'){
        return 0;
    }
    if(room->level == 'B'){
        return -1;
    }
    return room->level - '0';
}

float circular_area(Room *room) {
    float radius = room->dimensions->radius;
    return (2 * radius) * (2 * radius);
}

Room* new_circular_room(char level, float radius){
    Dimensions* dimensions = malloc(sizeof(Dimensions));
    dimensions->radius = radius;
    Room* room = malloc(sizeof(Room));
    room->level = level;
    room->dimensions = dimensions;
    room->area = &circular_area;
    room->flightsOfStairs = &circularFlightsOfStairs;
    return room;
}