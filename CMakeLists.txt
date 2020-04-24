cmake_minimum_required(VERSION 3.16)
project(ecs_vs_oo)

set(CMAKE_CXX_STANDARD 14)

add_executable(ecs_vs_oo main.cpp GameObject.h Components.h Position.h AttemptedInputs.h PointerClass.h GameObjectWithPointers.h utils.h)