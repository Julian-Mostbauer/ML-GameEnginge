#include "Game.hpp"
#include "RenderUtils.hpp"
#include "GUI.hpp"
#include "InputUtils.hpp"

int currentWindowHeight = Game::WINDOW_HEIGHT;
int currentWindowWidth = Game::WINDOW_WIDTH;


void testSpeed(int amount) {
	auto start_time = std::chrono::high_resolution_clock::now();
	
	for(int i = 0; i < amount;i++){
	}
	
	auto end_time = std::chrono::high_resolution_clock::now();

	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
	std::cout << "Time taken total: " << (double)duration.count() << " microseconds." << std::endl;
	std::cout << "Time taken per: " << (double)duration.count()/amount << " microseconds." << std::endl;

}

void MasterEvent(SDL_Window* window, SDL_Renderer* renderer, vector<Game::Body>& gameObjects) {
	SDL_GetWindowSize(window, &currentWindowWidth, &currentWindowHeight);
	int x, y = 0;
	getMouse(renderer, &x, &y);


	for (Game::Body& gameObject : gameObjects) {
		gameObject.setColor((gameObject.contains(Game::Point{ x, y })) ? 0x00ff00 : 0xff0000);
		gameObject.slide(1);
	}
}

void MasterRender(SDL_Renderer* renderer, vector<Game::Body>& gameObjects) {
	clearScreen(renderer);
	for (auto gameObject : gameObjects) {
		gameObject.drawFrame(renderer);
	}
}

int main(int argc, char* argv[]) {
	std::srand(std::time(0));
	SDL_Event event;
	vector<Game::Body> gameObjects;

	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window* window{};
	SDL_Renderer* renderer{};

	Game::createNewWindowRenderer(window, renderer, "Game");

	Game::spawnCube(100, 100, 100, 100, 0xff0000, Game::Vec2d(1,1), gameObjects);
	Game::spawnCube(140, 140, 20, 20, 0x00ff00, Game::Vec2d(0, 0), gameObjects);


	bool quit = false;
	while (!quit) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit = true;
			}
			if (event.type == SDL_KEYDOWN) {
				if (event.key.keysym.sym == SDLK_ESCAPE) {
					quit = true;
				}
				// MOVEMENT
				switch (event.key.keysym.sym) {
				case SDLK_s:
				{
					Game::Vec2d velocity(0,1);
					int x = rand() % currentWindowWidth;
					int y = rand() % currentWindowHeight;
					Game::spawnCube(x, y, rand() % (currentWindowWidth - x), rand() % (currentWindowHeight - y), 0xff0000, velocity, gameObjects);
				}
					break;
				case SDLK_d:
					Game::clearGameobjects(gameObjects);
					break;
				case SDLK_f:
					try {
						for (Game::Body& gameObject : gameObjects) {
							gameObject.getPoints().push_back(Game::Point(rand() % currentWindowWidth, rand() % currentWindowHeight));
						}
					}
					catch(const std::exception& ex) {
						std::cout << "error: " << ex.what() << std::endl;
					}
					break;
				}
			}
		}
		MasterEvent(window, renderer, gameObjects);
		MasterRender(renderer, gameObjects);
		SDL_RenderPresent(renderer);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return EXIT_SUCCESS;
}