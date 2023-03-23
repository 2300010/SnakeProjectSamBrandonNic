#pragma once
#include "GameManager.h"

class ScoreManager
{
	//Declare variables for score
	int baseScore = 0;
	int fullScore = 0;

public:

	//Adds to baseScore
	void UpdateScore(int applesEaten);

	//Getter for fullScore
	int GetFullScore();
};

