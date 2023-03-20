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
				myMapManager.mySnakeManager.mySnake.SetSnakeDirection(UP);
			}
			else if (keyPressed == 80) //Verify if keyPressed is equal to the ASCII code of DOWN
			{
				//Set the direction of the snake to down
				myMapManager.mySnakeManager.mySnake.SetSnakeDirection(DOWN);
			}
			else if (keyPressed == 75) //Verify if keyPressed is equal to the ASCII code of LEFT
			{
				//Set the direction of the snake to left
				myMapManager.mySnakeManager.mySnake.SetSnakeDirection(LEFT);
			}
			else if (keyPressed == 77) //Verify if keyPressed is equal to the ASCII code of RIGHT
			{
				//Set the direction of the snake to right
				myMapManager.mySnakeManager.mySnake.SetSnakeDirection(RIGHT);
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
	
}

//Method that moves the snake
void GameManager::MoveSnake() 
{
	try
	{
		// if snake eats itself : game over
		if (myMapManager.CheckSnakeHeadCollisionWithBody()) {
			GameOver();
		}
		// if snake eats apple : spawn new apple and move
		else if (myMapManager.CheckSnakeHeadCollisionWithApple()) {
			myMapManager.SnakeEatsApple();
		}
		//else snake moves
		else {
			myMapManager.MoveSnake(myMapManager.CheckSnakeHeadCollisionWithScreen());
		}
	}
	catch (const std::exception&)
	{

	}
}

//Method that generates the timer
void GameManager::TimeGenerator() 
{
	try
	{

	}
	catch (...)
	{

	}
}


void GameManager::GameOver() {

}