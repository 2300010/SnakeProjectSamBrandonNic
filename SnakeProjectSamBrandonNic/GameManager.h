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
	int applesEaten = 0;

	//GETTERS AND SETTERS
	bool GetIsPlaying();
	void SetIsPlaying(bool isPlaying);

	//SIGNATURES OF THE METHODS
	//Input manager
	void InputManager();

	//Moves the snake
	void Play();

	//Generates the timer
	void TimeGenerator();

	//Actions for when game is over
	void GameOver();
};

