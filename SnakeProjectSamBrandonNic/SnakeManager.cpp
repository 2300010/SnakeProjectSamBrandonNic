//Samuel	Coding of methods SetupStartingSnake and AddBodyPart

#include "SnakeManager.h"

//DEFITION OF METHODS
//Method that sets the snake to strating values
void SnakeManager::SetupStartingSnake()
{
	try
	{
		const int SCREEN_WIDTH = 100;  //A REMPLACER ********************
		const int SCREEN_HEIGHT = 100; //A REMPLACER ********************

		//Set starting length, direction and position of the snake
		mySnake.SetBodyLength(mySnake.STARTING_LENGTH);
		mySnake.SetSnakeDirection(mySnake.STARTING_DIRECTION);
		mySnake.SetHeadPositionX(SCREEN_WIDTH / 2);
		mySnake.SetHeadPositionY(SCREEN_HEIGHT / 2);

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

//Method that adds a body part to the snake parts vector
void SnakeManager::AddBodyPart()
{
	try
	{
		//Insert body part to the second index 
		snakeParts.push_back(mySnake.BODY_PART);

		//Set new size of the snake
		mySnake.SetBodyLength(snakeParts.size());
	}
	catch (...)
	{

	}
}
