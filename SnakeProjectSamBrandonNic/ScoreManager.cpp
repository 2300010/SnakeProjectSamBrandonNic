#include "UiManager.h"


//Method that adds to baseScore
void ScoreManager::UpdateScore(int applesEaten)
{
	//Add one to base score every time snake moves
	baseScore++;

	//Update full score
	fullScore = baseScore + applesEaten;
}

//Getter for fullScore
int ScoreManager::GetFullScore() 
{
	return fullScore;
}