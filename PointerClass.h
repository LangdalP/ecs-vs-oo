//
// Created by Peder Voldnes Langdal on 20/04/2020.
//

#ifndef ECS_VS_OO_POINTERCLASS_H
#define ECS_VS_OO_POINTERCLASS_H


#include "Position.h"
#include "AttemptedInputs.h"

class PointerClass {
public:
    Position* position;
    AttemptedInputs* playerInputs;

    PointerClass(Position* position, AttemptedInputs* playerInputs) {
        this->position = position;
        this->playerInputs = playerInputs;
    }
};


#endif //ECS_VS_OO_POINTERCLASS_H
