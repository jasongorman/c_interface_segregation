//
// Created by Jason on 25/03/2019.
//

#ifndef ENCAPSULATION_ROOM_H
#define ENCAPSULATION_ROOM_H

typedef struct Dimensions Dimensions;
typedef struct Room Room;

struct Room {
    Dimensions *dimensions;
    char level;
    float (*area)(struct Room*);
    int (*flightsOfStairs)(struct Room*);
};

#endif //ENCAPSULATION_ROOM_H
