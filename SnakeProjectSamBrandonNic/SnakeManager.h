//Samuel	Creation and structure of the class

#pragma once

#include "Snake.h"
#include <vector>

class SnakeManager
{
public:
	//Declare object of snake class
	Snake mySnake;

	//Declare vector to receive the parts of the snake
	vector<char> snakeParts;

	//Declare constructor
	SnakeManager() 
	{

	}
	
	//SIGNATURE OF METHODS
	//Sets the snake to starting values
	void SetupStartingSnake(int mapHeight, int mapWidth);

	//Adds a body part to the snake
	void AddBodyPart();


};

