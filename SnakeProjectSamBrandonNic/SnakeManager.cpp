//Samuel	Coding SetupStartingSnake and AddBodyPart

#include "SnakeManager.h"

//DEFITION OF METHODS
//Method that sets the snake to strating values
void SnakeManager::SetupStartingSnake()
{
	try
	{
		//Set length of the snake
		mySnake.SetBodyLength(mySnake.STARTING_LENGTH);

		//Fill vector with starting body parts
		for (int i = 0; i < mySnake.STARTING_LENGTH; i++)
		{
			if (snakeParts.size() != 0)
			{
				if (i < 9)
				{
					snakeParts.push_back(mySnake.BODY_PART);
				}
				else
				{
					snakeParts.push_back(mySnake.TAIL_PART);
				}
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
		snakeParts.insert(snakeParts.end() - 1, mySnake.BODY_PART);

		//Set new size of the snake
		mySnake.SetBodyLength(snakeParts.size());
	}
	catch (...)
	{

	}
}
