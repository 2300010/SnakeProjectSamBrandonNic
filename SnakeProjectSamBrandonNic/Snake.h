#pragma once

#include <iostream>

class SnakeClass
{
	//Declare variable for properties
	int bodyLength = 0;
	float speed = 0;

public:

	//Declare constructor
	SnakeClass(int bodyLength, float speed) 
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

