#pragma once
#include <SDL.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstdlib> 
#include <ctime>
#include <vector>
#include <chrono>

using std::vector;

namespace Game {
	constexpr int WINDOW_HEIGHT = 512;
	constexpr int WINDOW_WIDTH = 512;


	void createNewWindowRenderer(SDL_Window*& window, SDL_Renderer*& renderer, const char* title);

	struct Point {
	private:
	public:
		int x;
		int y;

		friend class Vec2d;
		Point() = default;

		Point(int x, int y)
			: x(x), y(y)
		{
		}

		void operator+=(const Point& other);

		Point operator+(Vec2d vec) const;
		void operator+=(Vec2d vec);
	};

	class Vec2d {
	private:
		double x;
		double y;
	public:
		Vec2d(double x, double y);
		~Vec2d();

		void setX(double v);
		void setY(double v);

		double getX();
		double getY();

		void normalize();

		Vec2d operator*(double scalar) const;
		Vec2d operator/(double scalar) const;
	};

	class Body {
	private:
		vector<Point> bodyPoints;
		int color;
		Vec2d velocity;
	public:
		Body(vector<Point> points, int color, Vec2d velocity);
		~Body();

		Body() = default;

		vector<Point>& getPoints();
		const vector<Point>& getPoints() const;

		int getColor() const;

		void setColor(int value);

		void modColor(int value);

		Vec2d& getVelocity();

		void drawFrame(SDL_Renderer* renderer) const;

		void drawFilled(SDL_Renderer* renderer) const;

		bool contains(const Point& p);

		void slide(double deltaT);

	};

	void spawnCube(int x, int y, int w, int h, int color, Vec2d velocity, vector<Body>& gameObjects);

	void clearGameobjects(vector<Body>& gameObjects);
}