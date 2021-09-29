#include "Renderer.h"

SDL_Renderer* cRenderer::createRenderer(SDL_Window* window) 
{
	renderer = SDL_CreateRenderer(window,-1,0);
	return renderer;
}