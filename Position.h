//
// Created by Peder Voldnes Langdal on 20/04/2020.
//

#ifndef ECS_VS_OO_POSITION_H
#define ECS_VS_OO_POSITION_H


class Position {
public:
    float x;
    float y;

    Position() { }

    Position(float x, float y) {
        this->x = x;
        this->y = y;
    }
};


#endif //ECS_VS_OO_POSITION_H
