#include "GUI.hpp"


void drawChar(SDL_Renderer* renderer, int x, int y, char Char, int font_size, int color, int* newLineTracker, int* newCharTracker) {
	SDL_SetRenderDrawColor(renderer, color >> 16, color >> 8, color, 255);
	if (newLineTracker != nullptr) {
		y += font_size * 8 * *newLineTracker;
	}
	switch (Char) {
	case 'A':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'B':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case 'C':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'D':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case 'E':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'F':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
			}
		}
		break;
	case 'G':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'H':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'I':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'J':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'K':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'L':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'M':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'N':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'O':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'P':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
			}
		}
		break;
	case 'Q':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'R':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'S':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'T':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case 'U':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'V':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case 'W':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'X':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'Y':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case 'Z':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'Ä':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'Ö':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'Ü':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;

	case 'a':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'b':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'c':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'd':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'e':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'f':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
			}
		}
		break;
	case 'g':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'h':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'i':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case 'j':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
			}
		}
		break;
	case 'k':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case 'l':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case 'm':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'n':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'o':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'p':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
			}
		}
		break;
	case 'q':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'r':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
			}
		}
		break;
	case 's':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 't':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case 'u':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'v':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case 'w':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'x':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'y':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
			}
		}
		break;
	case 'z':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'ä':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case 'ö':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case 'ü':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;

	case '!':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case '?':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case '.':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case ',':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
			}
		}
		break;
	case '>':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
			}
		}
		break;
	case '<':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
			}
		}
		break;
	case '+':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
			}
		}
		break;
	case '-':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
			}
		}
		break;
	case '*':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
			}
		}
		break;
	case '/':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
			}
		}
		break;
	case '#':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case '"':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
			}
		}
		break;
	case '$':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case '%':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case '&':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case '(':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
			}
		}
		break;
	case ')':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case '=':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
			}
		}
		break;
	case '\\':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case '{':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case '}':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
			}
		}
		break;
	case '[':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
			}
		}
		break;
	case ']':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case '_':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 9);
			}
		}
		break;
	case ':':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
			}
		}
		break;
	case ';':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 9);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
			}
		}
		break;
	case '|':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 7);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 8);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 9);
			}
		}
		break;
	case '^':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 1);
			}
		}
		break;
	case '°':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 0);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 3);
			}
		}
		break;
	case '~':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 5, y + j + font_size * 5);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 0, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 3, y + j + font_size * 6);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 4, y + j + font_size * 6);
			}
		}
		break;

	case '1':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i, y + j + font_size * 4);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 4);

				for (int k = 0; k < 5;k++) {
					SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * k);
				}
			}
		}
		break;
	case '2':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size);
				SDL_RenderDrawPoint(renderer, x + i, y + j + font_size * 3);

				for (int k = 0; k < 3; k++) {
					for (int l = 0; l < 5; l += 2)
						SDL_RenderDrawPoint(renderer, x + i + font_size * k, y + j + font_size * l);
				}
			}
		}
		break;
	case '3':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + font_size * 2 + i, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + font_size * 2 + i, y + j + font_size * 3);

				for (int k = 0; k < 3; k++) {
					for (int l = 0; l < 5; l += 2)
						SDL_RenderDrawPoint(renderer, x + i + font_size * k, y + j + font_size * l);
				}
			}
		}
		break;
	case '4':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);

				for (int k = 0; k < 3; k++) {
					SDL_RenderDrawPoint(renderer, x + i, y + j + font_size * k);
				}

				for (int k = 0; k < 5; k++) {
					SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * k);
				}
			}
		}
		break;
	case '5':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i, y + j + font_size);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);

				for (int k = 0; k < 3; k++) {
					for (int l = 0; l < 5; l += 2)
						SDL_RenderDrawPoint(renderer, x + i + font_size * k, y + j + font_size * l);
				}
			}
		}
		break;
	case '6':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i, y + j + font_size);
				SDL_RenderDrawPoint(renderer, x + i, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);

				for (int k = 0; k < 3; k++) {
					for (int l = 0; l < 5; l += 2)
						SDL_RenderDrawPoint(renderer, x + i + font_size * k, y + j + font_size * l);
				}
			}
		}
		break;
	case '7':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 1);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 2);
				SDL_RenderDrawPoint(renderer, x + i, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i, y + j + font_size * 4);

				for (int k = 0; k < 3; k++) {
					SDL_RenderDrawPoint(renderer, x + i + font_size * k, y + j);
				}
			}
		}
		break;
	case '8':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i, y + j + font_size);
				SDL_RenderDrawPoint(renderer, x + i, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * 3);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size);

				for (int k = 0; k < 3; k++) {
					for (int l = 0; l < 5; l += 2)
						SDL_RenderDrawPoint(renderer, x + i + font_size * k, y + j + font_size * l);
				}
			}
		}
		break;
	case '9':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i, y + j + font_size * 1);

				for (int k = 0; k < 2; k++) {
					for (int l = 0; l < 4; l += 2)
						SDL_RenderDrawPoint(renderer, x + i + font_size * k, y + j + font_size * l);
				}

				for (int k = 0; k < 5; k++) {
					SDL_RenderDrawPoint(renderer, x + i + font_size * 2, y + j + font_size * k);
				}
			}
		}
		break;
	case '0':
		for (int i = 0; i < font_size; i++) {
			for (int j = 0; j < font_size; j++) {
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j);
				SDL_RenderDrawPoint(renderer, x + i + font_size * 1, y + j + font_size * 4);

				for (int k = 0; k < 4; k += 2) {
					for (int l = 0; l < 5; l++) {
						SDL_RenderDrawPoint(renderer, x + i + font_size * k, y + j + font_size * l);
					}
				}
			}
		}
		break;
	case '\n':
		if (newLineTracker != nullptr) {
			(*newLineTracker)++;
		}
		break;
	case '\r':
		if (newCharTracker != nullptr) {
			(*newCharTracker) = -1; // Instead of 0, because it is increased again at the end of the function
		}
		break;
	}

	if (newCharTracker != nullptr) {
		(*newCharTracker)++;
	}

}

void drawText(SDL_Renderer* renderer, int x, int y, std::string text, int font_size, int color) {
	int space = 10;
	int* newLineTracker = new int(0);
	int* newСharTracker = new int(0);
	for (int i = 0; i < text.length(); i++) {
		drawChar(renderer, x + (*newСharTracker) * space * font_size, y, text[i], font_size, color, newLineTracker, newСharTracker);
	}
}

void drawText(SDL_Renderer* renderer, int x, int y, int text, int font_size, int color) {
	int space = 10;
	int* newLineTracker = new int(0);
	int* newСharTracker = new int(0);
	std::string numStr = std::to_string(text);
	for (int i = 0; i < numStr.length(); i++) {
		drawChar(renderer, x + i * space * font_size, y, numStr[i], font_size, color, newLineTracker, newСharTracker);
	}
}