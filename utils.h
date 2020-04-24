//
// Created by Peder Voldnes Langdal on 20/04/2020.
//

#ifndef ECS_VS_OO_UTILS_H
#define ECS_VS_OO_UTILS_H

#include <cstdlib>
#include "GameObject.h"
#include "Components.h"
#include "GameObjectWithPointers.h"

float random_float() {
    auto randomInt = rand();
    return (float)randomInt;
}

Position generate_position() {
    return Position(random_float(), random_float());
}

Position* generate_position_heap() {
    return new Position(random_float(), random_float());
}

AttemptedInputs generate_player_inputs() {
    return AttemptedInputs(random_float(), random_float(), random_float(), random_float());
}

AttemptedInputs* generate_player_inputs_heap() {
    return new AttemptedInputs(random_float(), random_float(), random_float(), random_float());
}

GameObject generate_game_object() {
    return GameObject(generate_position(), generate_player_inputs());
}

GameObjectWithPointers generate_game_object_with_pointers() {
    return GameObjectWithPointers(generate_position_heap(), generate_player_inputs_heap());
}

std::vector<GameObjectWithPointers> generate_game_objects_with_pointers(int num_objects) {
    auto game_objects = std::vector<GameObjectWithPointers>();
    game_objects.reserve(num_objects);

    for (int i = 0; i < num_objects; ++i) {
        game_objects.push_back(generate_game_object_with_pointers());
    }

    return game_objects;
}

std::vector<GameObject> generate_game_objects(int num_objects) {
    auto game_objects = std::vector<GameObject>();
    game_objects.reserve(num_objects);

    for (int i = 0; i < num_objects; ++i) {
        game_objects.push_back(generate_game_object());
    }

    return game_objects;
}

Components generate_components(int num_objects) {
    auto positions = std::vector<Position>();
    positions.reserve(num_objects);

    auto playerInputs = std::vector<AttemptedInputs>();
    playerInputs.reserve(num_objects);

    for (int i = 0; i < num_objects; ++i) {
        positions.push_back(generate_position());
        playerInputs.push_back(generate_player_inputs());
    }

    return Components(positions, playerInputs);
}

#endif //ECS_VS_OO_UTILS_H
