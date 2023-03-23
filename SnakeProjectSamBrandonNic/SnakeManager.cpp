//Samuel	Coding of methods SetupStartingSnake and AddBodyPart

#include "SnakeManager.h"

//DEFITION OF METHODS
// 
//Method that sets the snake to stating values : Sam et Nicolas
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
		//Begining of vector is always the head
		for (int i = 0; i < mySnake.STARTING_LENGTH ; i++)
		{
			vector<int> temp = { mySnake.GetHeadPositionY(), mySnake.GetHeadPositionX() - i};
			if (snakeParts.size() != 0)
			{
				// Building and storing vector with positions, starting from the tail
				snakeBodyPositions.push_back(temp);
				snakeParts.push_back(mySnake.BODY_PART);
			}
			else
			{
				snakeParts.push_back(mySnake.HEAD_PART);
				snakeBodyPositions.at(0).at(0) = mySnake.GetHeadPositionY();
				snakeBodyPositions.at(0).at(1) = mySnake.GetHeadPositionX();
				snakeBodyPositions.push_back(temp);
			}
		}
	}
	catch (...)
	{

	}
}

//Method that adds a body part to the snake parts vector and update parts positions : Sam et Nicolas
void SnakeManager::Grow()
{
	try
	{
		//Insert body part to the second index 
		snakeParts.push_back(mySnake.BODY_PART);

		// Add new position after head in body position vector
		vector<int> temp = { mySnake.GetHeadPositionY(), mySnake.GetHeadPositionX()};
		snakeBodyPositions.insert(snakeBodyPositions.begin() + 1, temp);

		//Update new head position
		mySnake.SetHeadPositionY(nextPosition.at(0));
		mySnake.SetHeadPositionX(nextPosition.at(1));
		snakeBodyPositions.at(0)[0] = mySnake.GetHeadPositionY();
		snakeBodyPositions.at(0)[1] = mySnake.GetHeadPositionX();

		//Set new size of the snake
		mySnake.SetBodyLength(snakeParts.size());

	}
	catch (...)
	{

	}
}

