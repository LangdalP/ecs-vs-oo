//
// Created by Peder Voldnes Langdal on 20/04/2020.
//

#ifndef ECS_VS_OO_GAMEOBJECTWITHPOINTERS_H
#define ECS_VS_OO_GAMEOBJECTWITHPOINTERS_H


#include "Position.h"
#include "AttemptedInputs.h"

class GameObjectWithPointers {
public:
    Position* position;
    AttemptedInputs* playerInputs;

    GameObjectWithPointers(Position* position, AttemptedInputs* playerInputs) {
        this->position = position;
        this->playerInputs = playerInputs;
    }
};


#endif //ECS_VS_OO_GAMEOBJECTWITHPOINTERS_H
