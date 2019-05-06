//
// Created by Jason on 25/03/2019.
//

#include "carpet_quote.h"
#include "carpet.h"

float quote(IRoomArea *area, Carpet *carpet){
    return price(carpet, area->area(area->this));
}

