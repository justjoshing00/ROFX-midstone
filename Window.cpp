
#include "Window.h"



SDL_Window* cWindow::createWindow()
{
	window = SDL_CreateWindow("title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
	return window;
}
