// init the game, then run tthe game
#include <SDL.h>
#include <stdio.h>
#include "Input.h"
#include "Initialization.h"
#include "Window.h"
#include "Renderer.h"
#include "Scene.h"
#include <iostream>

Scene scene1;

void Update(float deltatime);
void Render(SDL_Renderer& prenderer);


// so whats happening here is that because we are doing this all in main rather than in a game class, we are having scope issues
//that are messing up most of the rest of the code.
//the 'real' solution to this is to move my stuff out of main. but the problem is that because of the way i did my initialization
// and windowing stuff, i now have a problem doing that. Some help would be appreciated


int main(int argc, char* args[])
{
	
	cWindow win;
	cRenderer ren;

	init();

	float deltaTime = 60.0;


	SDL_Window* pwindow = win.createWindow();
	SDL_Renderer* prenderer = ren.createRenderer(pwindow);
	


	SDL_Event event;
	bool running = true;
	while (running != false)
	{

		Update(deltaTime);

		Render(*prenderer); // this could cause issues

		SDL_Delay(50000);
		SDL_Quit();
	}

	return 0;
}

void Update(float deltatime)
{
	scene1.updateScene(deltatime);
}
void Render(SDL_Renderer &prenderer)
{
	std::cout << "bleh";
	SDL_SetRenderDrawColor(&prenderer, 0, 0, 0, 0);

	SDL_RenderClear(&prenderer);

	SDL_RenderPresent(&prenderer);
	
	//renderscene();
}


