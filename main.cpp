#include <iostream>
#include "Position.h"
#include "AttemptedInputs.h"
#include "GameObject.h"
#include "PointerClass.h"
#include "utils.h"

/*
 * Intel i7-6820HQ - 4 cores
 * L1: Total: 256 KiB. Each core has 32 KiB data and instruction cache
 * L2: 1 MiB split 4 ways
 * L3: 8 Mib split 4 ways
 */

/*
 * Size of float: 4 bytes
 * Size of position: 8 bytes
 * Size of playerInputs: 16 bytes
 *
 * Can fit 128 positions in L1 cache (per core)
 * Can fit 32768 position in L2 cache (per core)
 * Can fit 262144 positions in L3 cache (per core)
 */
const int num_players = 2000000; // A arbitrary large number
// const int num_players = 200000; // Slightly less than L3 cache per core
// const int num_players = 30000; // Slightly less than L2 cache per core

const std::string blue("\033[0;34m");
const std::string normal("\033[0;30m");

std::chrono::duration<double> do_calculation_on_game_objects_with_pointers(std::vector<GameObjectWithPointers>& players, bool printBright) {
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    for (GameObjectWithPointers& player : players) {
        player.position->x += 1;
        player.position->y += 1;
    }

    for (GameObjectWithPointers& player : players) {
        player.position->x += 1;
        player.position->y += 1;
    }

    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

    if (printBright) {
        std::cout << blue;
    }

    std::cout << "Calculations for GameObjectWithPointers took " << time_span.count() << " seconds.";
    std::cout << std::endl;

    std::cout << normal;

    return time_span;
}

std::chrono::duration<double> do_calculation_on_game_objects(std::vector<GameObject>& players, bool printBright) {
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    for (GameObject& player : players) {
        player.position.x += 1;
        player.position.y += 1;
    }

    for (GameObject& player : players) {
        player.position.x += 1;
        player.position.y += 1;
    }

    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

    if (printBright) {
        std::cout << blue;
    }

    std::cout << "Calculations for GameObject took " << time_span.count() << " seconds.";
    std::cout << std::endl;

    std::cout << normal;

    return time_span;
}

std::chrono::duration<double> do_calculation_on_components(Components& components, bool printBright) {
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    for (Position& position : components.positions) {
        position.x += 1;
        position.y += 1;
    }

    for (Position& position : components.positions) {
        position.x += 1;
        position.y += 1;
    }

    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

    if (printBright) {
        std::cout << blue;
    }

    std::cout << "Calculations for Components took " << time_span.count() << " seconds.";
    std::cout << std::endl;

    std::cout << normal;

    return time_span;
}

int main() {
    std::cout << "Hello, Spelutviklingsgruppa!" << std::endl;

    std::cout << "Debug: size of Position: " << sizeof(Position) << std::endl;
    std::cout << "Debug: size of GameObject: " << sizeof(GameObject) << std::endl;

    std::cout << "Running microbenchmark with " << num_players << " simulated game objects" << std::endl;

    auto game_objects_with_pointers = generate_game_objects_with_pointers(num_players);
    auto game_objects = generate_game_objects(num_players);
    auto components = generate_components(num_players);

    do_calculation_on_game_objects_with_pointers(game_objects_with_pointers, false);
    auto duration1 = do_calculation_on_game_objects_with_pointers(game_objects_with_pointers, true);

    std::cout << "--------" << std::endl;

    do_calculation_on_game_objects(game_objects, false);
    auto duration2 = do_calculation_on_game_objects(game_objects, true);

    std::cout << std::endl;
    std::cout << "Speedup compared to 'game objects with pointers' approach: " << duration1 / duration2 - 1.0 << std::endl;
    std::cout << "--------" << std::endl;

    do_calculation_on_components(components, false);
    auto duration3 = do_calculation_on_components(components, true);

    std::cout << std::endl;
    std::cout << "Speedup from 'game objects with pointers' approach: " << duration1 / duration3 - 1.0 << std::endl;
    std::cout << "Speedup from 'game objects without pointers' approach: " << duration2 / duration3  - 1.0 << std::endl;
    std::cout << "--------" << std::endl;

    return 0;
}
