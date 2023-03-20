//Samuel	Coding of methods SetupStartingSnake and AddBodyPart

#include "SnakeManager.h"

//DEFITION OF METHODS
//Method that sets the snake to strating values
void SnakeManager::SetupStartingSnake(int mapHeight, int mapWidth)
{
	try
	{
		//Set starting length, direction and position of the snake
		mySnake.SetBodyLength(mySnake.STARTING_LENGTH);
		mySnake.SetSnakeDirection(mySnake.STARTING_DIRECTION);
		mySnake.SetHeadPositionX(mapWidth / 2);
		mySnake.SetHeadPositionY(mapHeight / 2);

		//Fill vector with starting body parts
		for (int i = 0; i < mySnake.STARTING_LENGTH; i++)
		{
			if (snakeParts.size() != 0)
			{
				snakeParts.push_back(mySnake.BODY_PART);
			}
			else
			{
				snakeParts.push_back(mySnake.HEAD_PART);
			}
		}
	}
	catch (...)
	{

	}
}

//Method that adds a body part to the snake parts vector and update parts positions
void SnakeManager::Grow()
{
	try
	{
		//Insert body part to the second index 
		snakeParts.push_back(mySnake.BODY_PART);

		//Update snake body positions (new body part where head is currently located)
		vector<int> head = { mySnake.GetHeadPositionX(),mySnake.GetHeadPositionY() };
		snakeBodyPositions.insert(snakeBodyPositions.begin(),head);

		//Update new head position
		mySnake.SetHeadPositionX(nextPosition.at(0));
		mySnake.SetHeadPositionY(nextPosition.at(1));

		//Set new size of the snake
		mySnake.SetBodyLength(snakeParts.size());
	}
	catch (...)
	{

	}
}

void SnakeManager::Move() {
	vector<int> head = { mySnake.GetHeadPositionX(),mySnake.GetHeadPositionY() };
	snakeBodyPositions.insert(snakeBodyPositions.begin(), head);
	snakeBodyPositions.pop_back();

	mySnake.SetHeadPositionX(nextPosition[0]);
	mySnake.SetHeadPositionY(nextPosition[1]);

}