// Copyright 2022 quyykk
// SPDX-License-Identifer: Zlib

#include <iostream>
#include <SDL2/SDL.h>

int main()
{
	if(SDL_Init(SDL_INIT_VIDEO) != 0)
		return -1;

	std::cout << "initialized!\n";
	return 0;
}
