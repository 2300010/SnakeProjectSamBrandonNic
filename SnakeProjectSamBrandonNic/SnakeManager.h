//Samuel	Creation and structure of the class

#pragma once

#include "Snake.h"
#include <vector>

class SnakeManager
{
public:
	//Declare object of snake class
	Snake mySnake;

	//Declare next position as [0] == X && [1] == Y
	//TO DO : update to fit with starting snake head position and direction
	vector<int> nextPosition = {0,0};

	//Declare vector to receive the parts of the snake
	vector<char> snakeParts;

	//Declare vector to access every body part position, tail is but not head 
	vector<vector<int>> snakeBodyPositions;



	//Declare constructor
	SnakeManager() 
	{

	}
	
	//SIGNATURE OF METHODS
	//Sets the snake to starting values
	void SetupStartingSnake(int mapHeight, int mapWidth);

	//Adds a body part to the snake
	void Grow();
	
	//Get next head position related to direction
	
	void Move();


};

