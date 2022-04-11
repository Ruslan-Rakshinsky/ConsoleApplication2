#include "Game.h"

void Game::init() {
	gameOver = false;
	score = 0;
	x = s_width / 2;
	y = s_height / 2;
	srand(time(0));
	fx = rand() % s_width;
	fy = rand() % s_height;
}

void Game::render() {
	system("cls");
	for (int i = 0; i < s_height; i++)
	{
		for (int j = 0; j < s_width; j++)
		{
			if (j == 0 || j == s_width - 1 || i == 0 || i == s_height - 1)
			{
				std::cout << '#';
			}
			else if (j == x && i == y) {
				std::cout << 'O';
			}
			else if (j == fx && i == fy) {
				std::cout << 'f';
			}
			else {
				std::cout << ' ';
			}
		}
		std::cout << std::endl;
	}
}

void Game::input() {

}

void Game::logic() {

}