//
// Created by Jason on 06/05/2019.
//

#include <stdlib.h>
#include "room_area.h"

IRoomArea* asArea(IRoom *room){
    IRoomArea *area = malloc(sizeof(IRoomArea));
    area->this = room->this;
    area->area = room->area;
    return area;
}
