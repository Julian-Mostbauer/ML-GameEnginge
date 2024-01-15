#include "InputUtils.hpp"

void getMouse(SDL_Renderer* renderer, int* outX, int* outY) {
	Uint32 buttons = SDL_GetMouseState(outX, outY);
}