#pragma once
#include <SDL.h>


class cRenderer{
public:
	SDL_Renderer* renderer;
	SDL_Renderer* createRenderer(SDL_Window* window);
};