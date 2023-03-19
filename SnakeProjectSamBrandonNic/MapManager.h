//Samuel	Structure of the class
#pragma once
#include "AppleGenerator.h"
#include "SnakeManager.h"


class MapManager
{
	//Declare objects of other classes
	SnakeManager mySnakeManager;

	//Declare constants to receive screen dimensions
	static const int SCREEN_HEIGHT = 40;
	static const int SCREEN_WIDTH = 40;

public:

	//Create a 2D char array to represent the screen
	char map[SCREEN_HEIGHT][SCREEN_WIDTH];

	//Declare constructor
	MapManager();

	//GETTERS AND SETTERS
	int GetMapHeight();
	int GetMapWidth();

	//SIGNATURE OF METHODS
	//Initiates the map
	void InitMap();

	//Set the snake starting position
	void SetSnakePosition(SnakeManager snakeManager);
};

