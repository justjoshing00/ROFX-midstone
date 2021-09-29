#pragma once
#include <SDL.h>


class cWindow {
public:
	SDL_Window* window;
	SDL_Window* createWindow();
};

