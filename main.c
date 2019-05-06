#include <stdio.h>
#include <string.h>
#include "carpet_quote.h"
#include "rectangular_room.h"
#include "circular_room.h"
#include "floor_level.h"
#include "bool.h"
#include <assert.h>

void testRoomArea(Area *area, float expected){
    assert(area->area(area->room) ==  expected);
}

void testFloorLevel(FloorLevel *level, int flights){
    assert(level->flightsOfStairs(level->room) == flights);
}

void testCarpetQuote(Room *room, Carpet *carpet, float price){
    assert(quote(asArea(room), carpet) == price);
}

int main() {
    Room *rectangularRoom = new_rectangular_room('G', 2.5, 2.5);
    Room *circularRoom = new_circular_room('B', 2.5);
    Carpet *carpetNoRounding = new_carpet(10.0, false);
    Carpet *carpetRounding = new_carpet(10.0, true);
    testRoomArea(asArea(rectangularRoom), 6.25);
    testRoomArea(asArea(circularRoom), 25);
    testFloorLevel(asFloorLevel(rectangularRoom), 0);
    testFloorLevel(asFloorLevel(circularRoom), -1);
    testCarpetQuote(rectangularRoom, carpetNoRounding, 62.5);
    testCarpetQuote(rectangularRoom, carpetRounding, 70.0);

    return 0;
}