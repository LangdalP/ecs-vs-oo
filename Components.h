//
// Created by Peder Voldnes Langdal on 20/04/2020.
//

#ifndef ECS_VS_OO_COMPONENTS_H
#define ECS_VS_OO_COMPONENTS_H


#include <vector>
#include "Position.h"
#include "AttemptedInputs.h"

class Components {
public:
    std::vector<Position> positions;
    std::vector<AttemptedInputs> playerInputs;

    Components(std::vector<Position> positions, std::vector<AttemptedInputs> playerInputs) {
        this->positions = std::move(positions);
        this->playerInputs = std::move(playerInputs);
    }
};


#endif //ECS_VS_OO_COMPONENTS_H
