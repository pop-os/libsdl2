# Copyright 2022 quyykk
# SPDX-License-Identifier: Zlib

cmake_minimum_required(VERSION 3.13)

project(Test LANGUAGES CXX)

find_package(SDL2 CONFIG REQUIRED)
add_executable(program test.cpp)
target_link_libraries(program PRIVATE SDL2::SDL2 SDL2::SDL2main)
