# Copyright 2019-2022 Collabora Ltd.
# SPDX-License-Identifier: Zlib
# (see "zlib/libpng" in debian/copyright)

cmake_minimum_required(VERSION 3.13)
project(Hello)

find_package(SDL2 REQUIRED)

add_executable(hello hello.c)
target_link_libraries(hello SDL2::SDL2)
