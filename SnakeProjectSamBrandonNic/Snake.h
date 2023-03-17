//Samuel	Creation and structure of the class

#pragma once

using namespace std;

class Snake
{
	//Declare variable for properties
	int bodyLength = 0;
	float speed = 0.5f;

public:

	//Declare constants for the snake parts and starting length
	const int STARTING_LENGTH = 10;
	const char HEAD_PART = 'H';
	const char BODY_PART = 'B';
	const char TAIL_PART = 'T';

	//Declare constructor
	Snake() 
	{

	}

	//Signature of get-set for variables
	int GetBodyLength();
	void SetBodyLength(int newLength);

	int GetSpeed();
	void SetSpeed(int newSpeed);
};

