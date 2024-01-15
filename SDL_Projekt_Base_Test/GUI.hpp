#include <SDL.h>
#include <string>

void drawChar(SDL_Renderer* renderer, int x, int y, char Char, int font_size, int color, int* newLineTracker, int* newCharTracker);

void drawText(SDL_Renderer* renderer, int x, int y, std::string text, int font_size, int color);

void drawText(SDL_Renderer* renderer, int x, int y, int text, int font_size, int color);