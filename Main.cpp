// init the game, then run tthe game
#include <SDL.h>
#include <stdio.h>
#include "Input.h"
#include "Initialization.h"
#include "Window.h"
#include "Renderer.h"

int main(int argc, char* args[])
{
		cWindow win;
		cRenderer ren;

		init();
		SDL_Window* pwindow = win.createWindow();
		SDL_Renderer* prenderer = ren.createRenderer(pwindow);

		SDL_Event event;

		//game loop here
		bool isrunning = false;
		while (isrunning != false)
		{
			
		}

		SDL_SetRenderDrawColor(prenderer, 0, 0, 0, 0);

		SDL_RenderClear(prenderer);

		SDL_RenderPresent(prenderer);
		SDL_Delay(10000);
		SDL_Quit();
		return 0;
   
}

