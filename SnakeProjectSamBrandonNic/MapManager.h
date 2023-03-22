//Samuel	Structure of the class
#pragma once
#include "AppleGenerator.h"
#include "SnakeManager.h"
#include "Apple.h"


class MapManager
{
	//Declare constants to receive screen dimensions
	static const int SCREEN_HEIGHT = 40;
	static const int SCREEN_WIDTH = 40;


public:
	//Declare objects of other classes
	Apple myApple;
	SnakeManager mySnakeManager;


	//Create a 2D char array to represent the screen
	char map[SCREEN_HEIGHT][SCREEN_WIDTH];

	//Declare constructor, init snake starting position and first apple
	MapManager();

	//GETTERS AND SETTERS
	int GetMapHeight();
	int GetMapWidth();

	//SIGNATURE OF METHODS
	//Initiates the map
	void InitMap();

	//Set the snake starting position
	void SetSnakePosition(SnakeManager sm);

	//Check collisions 
	bool CheckSnakeHeadCollisionWithBody();
	bool CheckSnakeHeadCollisionWithApple();
	bool CheckAppleSpawn();

	void MoveSnake();

	void SnakeEatsApple();

	void NewApple();

	void UpdateSnakeNextPosition();
};

