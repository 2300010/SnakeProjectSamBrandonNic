#include "MapManager.h"

MapManager::MapManager(int xLimit, int yLimit) {
	this->xLimit = xLimit;
	this->yLimit = yLimit;
	apple.Spawn(xLimit, yLimit);

}

bool MapManager::checkSnakeHeadCollisionWithTail() {
	try
	{
		return ( snakeManager.mySnake.GetHeadPositionX() == 
	}
	catch (const std::exception&)
	{

	}
}

bool MapManager::checkSnakeHeadCollisionWithApple() {
	try
	{
		return (snakeManager.mySnake.GetHeadPositionX() == apple.GetX() &&
			snakeManager.mySnake.GetHeadPositionY() == apple.GetY());
	}
	catch (const std::exception&)
	{

	}
}
