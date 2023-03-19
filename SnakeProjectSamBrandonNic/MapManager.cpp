//Samuel	Coding of methods InitMap and SetSnakePosition

#include "MapManager.h"


//Declare empty constructor
MapManager::MapManager() 
{
	InitMap();
}

//GETTERS AND SETTERS
int MapManager::GetMapHeight()
{
	return SCREEN_HEIGHT;
}

int MapManager::GetMapWidth() 
{
	return SCREEN_WIDTH;
}

//DEFINITION OF METHODS
//Method that initiates the map
void MapManager::InitMap() 
{
	for (int i = 0; i < SCREEN_HEIGHT; i++)
	{
		for (int j = 0; j < SCREEN_WIDTH; j++)
		{
			map[i][j] = ' ';
		}
	}
}

//Set the snake starting position
void MapManager::SetSnakePosition(SnakeManager snakeManager)
{
	//Set the position of the body of the snake
	for (int i = 0; i < snakeManager.snakeParts.size(); i++)
	{
		//Declare variable to determine where to set the body parts
		int x = snakeManager.mySnake.GetHeadPositionX() - i - 1;
		int y = snakeManager.mySnake.GetHeadPositionY();

		//Verify if the last part position is still inside the map
		if (x >= 0)
		{
			//Set position of the next body part
			map[y][x] = snakeManager.snakeParts[i];
		}
	}
}

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
