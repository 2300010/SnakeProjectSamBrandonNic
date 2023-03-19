//Samuel	Coding of methods OnCollision, InputManager and MoveSnake

#include "GameManager.h"


//GETTERS AND SETTERS
bool GameManager::GetIsPlaying()
{
	try
	{
		return isPlaying;
	}
	catch (...)
	{

	}
}

void GameManager::SetIsPlaying(bool playOrPause) 
{
	try
	{
		isPlaying = playOrPause;
	}
	catch (...)
	{

	}
}

//Method that receives the inputs
void GameManager::InputManager() 
{
	try
	{
		//Verify if a key as been pressed
		if (_kbhit()) {

			//Declare a int variable to receive the ASCII code of the key
			int keyPressed = _getch();

			if (keyPressed == 72) //Verify if keyPressed is equal to the ASCII code of UP
			{
				//Set the direction of the snake to up
				mySnakeManager.mySnake.SetSnakeDirection(UP);
			}
			else if (keyPressed == 80) //Verify if keyPressed is equal to the ASCII code of DOWN
			{
				//Set the direction of the snake to down
				mySnakeManager.mySnake.SetSnakeDirection(DOWN);
			}
			else if (keyPressed == 75) //Verify if keyPressed is equal to the ASCII code of LEFT
			{
				//Set the direction of the snake to left
				mySnakeManager.mySnake.SetSnakeDirection(LEFT);
			}
			else if (keyPressed == 77) //Verify if keyPressed is equal to the ASCII code of RIGHT
			{
				//Set the direction of the snake to right
				mySnakeManager.mySnake.SetSnakeDirection(RIGHT);
			}
		}
	}
	catch (...)
	{

	}
}

//Method that detects collisions of the snake
void GameManager::OnCollision() 
{
	try
	{
		const int SCREEN_WIDTH = 100;  //A REMPLACER ********************
		const int SCREEN_HEIGHT = 100; //A REMPLACER ********************

		const int APPLE_X = 20; //A REMPLACER ********************
		const int APPLE_Y = 20; //A REMPLACER ********************

		//Verify if there is a collision with the screen or a body part
		if (mySnakeManager.mySnake.GetHeadPositionX() < 0 || mySnakeManager.mySnake.GetHeadPositionX() >= SCREEN_WIDTH 
			|| mySnakeManager.mySnake.GetHeadPositionX() < 0 || mySnakeManager.mySnake.GetHeadPositionX() >= SCREEN_HEIGHT)
		{
			//Set isPlaying to false;
			SetIsPlaying(false);
		}//Verify if there is a collision with an apple
		else if (mySnakeManager.mySnake.GetHeadPositionX() == APPLE_X 
			&& mySnakeManager.mySnake.GetHeadPositionY() == APPLE_Y)
		{
			//Add a body part to the snake
			mySnakeManager.AddBodyPart();
		}
	}
	catch (...)
	{

	}
}

//Method that moves the snake
void GameManager::MoveSnake() 
{
	try
	{
		//if()
	}
	catch (...)
	{

	}
}

//Method that generates the timer
void TimeGenerator() 
{
	try
	{

	}
	catch (...)
	{

	}
}