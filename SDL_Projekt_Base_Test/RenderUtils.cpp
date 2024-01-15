#include "Game.hpp"
#include "RenderUtils.hpp"

void clearScreen(SDL_Renderer* renderer){
	 SDL_SetRenderDrawColor(renderer, 0, 0, 0, 1);
	 SDL_RenderClear(renderer);
}
