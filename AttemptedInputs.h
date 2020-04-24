//
// Created by Peder Voldnes Langdal on 20/04/2020.
//

#define MORE_THINGS // Adds 64 bytes (equal to 8 positions)
#define EVEN_MORE_THINGS // Adds 128 bytes (equal to 16 positions)

#ifndef ECS_VS_OO_ATTEMPTEDINPUTS_H
#define ECS_VS_OO_ATTEMPTEDINPUTS_H


class AttemptedInputs {
public:
    float joystick_x;
    float joystick_y;
    float mouse_x;
    float mouse_y;

#ifdef MORE_THINGS
    float joystick_x2;
    float joystick_y2;
    float mouse_x2;
    float mouse_y2;

    float joystick_x3;
    float joystick_y3;
    float mouse_x3;
    float mouse_y3;

    float joystick_x4;
    float joystick_y4;
    float mouse_x4;
    float mouse_y4;

    float joystick_x5;
    float joystick_y5;
    float mouse_x5;
    float mouse_y5;
#endif

#ifdef EVEN_MORE_THINGS

    float joystick_x6;
    float joystick_y6;
    float mouse_x6;
    float mouse_y6;

    float joystick_x7;
    float joystick_y7;
    float mouse_x7;
    float mouse_y7;

    float joystick_x8;
    float joystick_y8;
    float mouse_x8;
    float mouse_y8;

    float joystick_x9;
    float joystick_y9;
    float mouse_x9;
    float mouse_y9;

    float joystick_x10;
    float joystick_y10;
    float mouse_x10;
    float mouse_y10;

    float joystick_x11;
    float joystick_y11;
    float mouse_x11;
    float mouse_y11;

    float joystick_x12;
    float joystick_y12;
    float mouse_x12;
    float mouse_y12;

    float joystick_x13;
    float joystick_y13;
    float mouse_x13;
    float mouse_y13;
#endif

    AttemptedInputs() { }

    AttemptedInputs(float jx, float jy, float mx, float my) {
        this->joystick_x = jx;
        this->joystick_y = jy;
        this->mouse_x = mx;
        this->mouse_y = my;

#ifdef MORE_THINGS
        this->joystick_x2 = jx;
        this->joystick_y2 = jy;
        this->mouse_x2 = mx;
        this->mouse_y2 = my;

        this->joystick_x3 = jx;
        this->joystick_y3 = jy;
        this->mouse_x3 = mx;
        this->mouse_y3 = my;

        this->joystick_x4 = jx;
        this->joystick_y4 = jy;
        this->mouse_x4 = mx;
        this->mouse_y4 = my;

        this->joystick_x5 = jx;
        this->joystick_y5 = jy;
        this->mouse_x5 = mx;
        this->mouse_y5 = my;
#endif

#ifdef EVEN_MORE_THINGS
        this->joystick_x6 = jx;
        this->joystick_y6 = jy;
        this->mouse_x6 = mx;
        this->mouse_y6 = my;

        this->joystick_x7 = jx;
        this->joystick_y7 = jy;
        this->mouse_x7 = mx;
        this->mouse_y7 = my;

        this->joystick_x8 = jx;
        this->joystick_y8 = jy;
        this->mouse_x8 = mx;
        this->mouse_y8 = my;

        this->joystick_x9 = jx;
        this->joystick_y9 = jy;
        this->mouse_x9 = mx;
        this->mouse_y9 = my;

        this->joystick_x10 = jx;
        this->joystick_y10 = jy;
        this->mouse_x10 = mx;
        this->mouse_y10 = my;

        this->joystick_x11 = jx;
        this->joystick_y11 = jy;
        this->mouse_x11 = mx;
        this->mouse_y11 = my;

        this->joystick_x12 = jx;
        this->joystick_y12 = jy;
        this->mouse_x12 = mx;
        this->mouse_y12 = my;

        this->joystick_x13 = jx;
        this->joystick_y13 = jy;
        this->mouse_x13 = mx;
        this->mouse_y13 = my;
#endif
    }
};


#endif //ECS_VS_OO_ATTEMPTEDINPUTS_H
