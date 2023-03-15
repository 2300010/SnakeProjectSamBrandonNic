//Samuel   Creation and structure of the class

#pragma once

#include <iostream>
#include <string>

class Snake
{
	//Declare constants for the snake parts
	const string HEAD_PART = "H";
	const string BODY_PART = "B";
	const string TAIL_PART = "T";

	//Declare variable for properties
	int bodyLength = 0;
	float speed = 0;

public:

	//Declare constructor
	Snake(int bodyLength, float speed) 
	{
		this->bodyLength = bodyLength;
		this->speed = speed;
	}

	//Signature of get-set for variables
	int GetBodyLength();
	void SetBodyLength(int newLength);

	int GetSpeed();
	void SetSpeed(int newSpeed);
};

