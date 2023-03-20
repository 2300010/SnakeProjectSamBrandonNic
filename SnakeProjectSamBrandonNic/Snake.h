//Samuel	Creation and structure of the class

#pragma once
#include "Direction.cpp"
#include "vector"

using namespace std;

class Snake
{
	//Declare variable for properties
	int bodyLength = 0;
	float speed = 0.5f;
	int headPositionX = 0;
	int headPositionY = 0;

	//Declare direction variable for the snake
	Direction snakeDirection;

public:

	//Declare constants for the snake parts and starting length
	const int STARTING_LENGTH = 10;
	const Direction STARTING_DIRECTION = RIGHT;
	const char HEAD_PART = 'H';
	const char BODY_PART = 'B';

	//Declare constructor
	Snake() 
	{

	}

	//Signature of get-set for variables
	int GetBodyLength();
	void SetBodyLength(int newLength);

	float GetSpeed();
	void SetSpeed(float newSpeed);

	int GetHeadPositionX();
	void SetHeadPositionX(int headX);

	int GetHeadPositionY();
	void SetHeadPositionY(int headY);

	Direction GetSnakeDirection();
	void SetSnakeDirection(Direction newDirection);
};

