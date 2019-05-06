//
// Created by Jason on 06/05/2019.
//

#include <stdlib.h>
#include "area.h"

Area* asArea(Room *room){
    Area *area = malloc(sizeof(Area));
    area->room = room;
    area->area = room->area;
    return area;
}
