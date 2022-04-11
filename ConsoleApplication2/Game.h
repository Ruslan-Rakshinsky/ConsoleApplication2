#pragma once
#include <iostream>
class Game
{
public:
	Game() {
		init();
		while (!gameOver) {
			render();
			logic();
			input();
		}
	}
private:
	bool gameOver;
	int s_width = 30, s_height = 20;
	int x, y;
	int fx, fy;
	int score;

	void init();
	void render();
	void logic();
	void input();
};

