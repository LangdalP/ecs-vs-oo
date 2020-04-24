//
// Created by Peder Voldnes Langdal on 20/04/2020.
//

#ifndef ECS_VS_OO_GAMEOBJECT_H
#define ECS_VS_OO_GAMEOBJECT_H


#include <string>
#include "Position.h"
#include "AttemptedInputs.h"

class GameObject {
public:
    Position position;
    AttemptedInputs playerInputs;

    GameObject(Position position, AttemptedInputs playerInputs) {
        this->position = position;
        this->playerInputs = playerInputs;
    }
};


#endif //ECS_VS_OO_GAMEOBJECT_H
