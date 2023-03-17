//Samuel	Coding of the definitions of the getters and setters

#include "Snake.h"

//Definitions get-set for variables
int Snake::GetBodyLength()
{
	try
	{
		return bodyLength;
	}
	catch (...)
	{
		
	}
}

void Snake::SetBodyLength(int newLength)
{
	try
	{
		bodyLength = newLength;

	}
	catch (...)
	{

	}
}

int Snake::GetSpeed()
{
	try
	{
		return speed;
	}
	catch (...)
	{

	}
}

void Snake::SetSpeed(int newSpeed)
{
	try
	{
		speed = newSpeed;
	}
	catch (...)
	{

	}
}
