//Nicolas	Creation of the classe
//Samuel	Structure of the classe

#pragma once

#include <conio.h>
#include "MapManager.h"


class GameManager
{
	//Declare object of snakeManager
	MapManager myMapManager;
	//Declare variable to verify if the player is in a game or not
	bool isPlaying = false;

public:

	//GETTERS AND SETTERS
	bool GetIsPlaying();
	void SetIsPlaying(bool isPlaying);

	//SIGNATURES OF THE METHODS
	//Input manager
	void InputManager();

	//Detects collisions of the snake
	void OnCollision();

	//Moves the snake
	void MoveSnake();

	//Generates the timer
	void TimeGenerator();

	//Actions for when game is over
	void GameOver();
};

