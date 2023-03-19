#pragma once
#include "MapManager.h"
#include "Apple.h"
#include "SnakeManager.h"


class MapManager
{
	SnakeManager snakeManager;
	Apple apple;
	int xLimit;
	int yLimit;

public :

	//instantiate MapManager and Spawn an apple
	MapManager(int xLimit,int yLimit);

	bool checkSnakeHeadCollisionWithTail();

	bool checkSnakeHeadCollisionWithApple();

	


};

