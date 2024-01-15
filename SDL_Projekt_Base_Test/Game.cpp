#include "Game.hpp"

namespace Game {

#pragma region Body

	Body::Body(vector<Point> points, int color, Vec2d velocity) : bodyPoints(points), color(color), velocity(velocity) {}

	Body::~Body() {}

	vector<Point>& Body::getPoints() {
		return bodyPoints;
	}
	const vector<Point>& Body::getPoints() const {
		return bodyPoints;
	}

	int Body::getColor() const {
		return color;
	}

	void Body::setColor(int value) {
		color = value;
	}

	void Body::modColor(int value) {
		color += value;
	}

	Vec2d& Body::getVelocity(){
		return velocity;
	}

	void Body::drawFrame(SDL_Renderer* renderer) const {
		SDL_SetRenderDrawColor(renderer, color >> 16, color >> 8, color, 255);
		for (int i = 0; i < bodyPoints.size(); i++) {
			auto current = bodyPoints[i];
			auto next = bodyPoints[(i + 1) % bodyPoints.size()];
			SDL_RenderDrawLine(renderer, current.x, current.y, next.x, next.y);
		}
	}

	void Body::drawFilled(SDL_Renderer* renderer) const {
		SDL_SetRenderDrawColor(renderer, color >> 16, color >> 8, color, 255);
		for (int i = 0; i < bodyPoints.size(); i++) {
			auto current = bodyPoints[i];
			auto next = bodyPoints[(i + 1) % bodyPoints.size()];
			SDL_RenderDrawLine(renderer, current.x, current.y, next.x, next.y);
		}
	}

	bool Body::contains(const Point& p) {
		int n = bodyPoints.size();
		if (n < 3) {
			// A polygon must have at least 3 vertices
			return false;
		}

		// Initialize the winding number
		int windingNumber = 0;

		for (int i = 0; i < n; ++i) {
			const Point& v1 = bodyPoints[i];
			const Point& v2 = bodyPoints[(i + 1) % n];

			// Check if the point is to the left of the edge
			if (v1.y <= p.y) {
				if (v2.y > p.y && (v2.x - v1.x) * (p.y - v1.y) - (v2.y - v1.y) * (p.x - v1.x) > 0) {
					++windingNumber;
				}
			}
			else {
				if (v2.y <= p.y && (v2.x - v1.x) * (p.y - v1.y) - (v2.y - v1.y) * (p.x - v1.x) < 0) {
					--windingNumber;
				}
			}
		}

		// The point is inside the polygon if the winding number is not zero
		return windingNumber != 0;
	}

	void Body::slide(double deltaT) {
		for (auto& point : bodyPoints) {
			point += velocity*deltaT;
		}
	}

#pragma endregion

#pragma region Point

	void Point::operator+=(const Point& other){
		Point solution(x + other.x, y + other.y);
		*this = solution;
	}

	void Point::operator+=(Vec2d vec) {
		x += vec.getX();
		y += vec.getY();
	}


#pragma endregion

#pragma region Vec2d

	Vec2d::Vec2d(double x, double y) : x(x), y(y) {}

	Vec2d::~Vec2d() {
	}

	double Vec2d::getX() {
		return x;
	}
	double Vec2d::getY() {
		return y;
	}
	void Vec2d::setX(double v) {
		x = v;
	}
	void Vec2d::setY(double v) {
		y = v;
	}

	void Vec2d::normalize() {
		double mag = sqrt(x * x + y * y);

		if (mag != 0.0) {
			*this = *this / mag;
		}
	}

	Vec2d Vec2d::operator*(double scalar) const {
		Vec2d result(x * scalar, y * scalar);
		return result;
	}
	Vec2d Vec2d::operator/(double scalar) const {
		double newX = x / scalar;
		double newY = y / scalar;
		Vec2d result(newX, newY);
		return result;
	}

#pragma endregion



	void spawnCube(int x, int y, int w, int h, int color, Vec2d velocity, vector<Body>& gameObjects) {
		vector<Game::Point> points;
		points.push_back(Game::Point{x, y});
		points.push_back(Game::Point{x, y + h});
		points.push_back(Game::Point{x + w, y + h});
		points.push_back(Game::Point{x + w, y});

		Game::Body boundry(points, color, velocity);

		gameObjects.push_back(boundry);

		points.clear();
		points.shrink_to_fit();
	}


	void createNewWindowRenderer(SDL_Window*& window, SDL_Renderer*& renderer, const char* title) {
		window = SDL_CreateWindow(title,
			SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			Game::WINDOW_WIDTH, Game::WINDOW_HEIGHT,
			SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN);
		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	}

	void clearGameobjects(vector<Body>& gameObjects) {
		gameObjects.clear();
		gameObjects.shrink_to_fit();
	}

}
