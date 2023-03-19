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

float Snake::GetSpeed()
{
	try
	{
		return speed;
	}
	catch (...)
	{

	}
}

void Snake::SetSpeed(float newSpeed)
{
	try
	{
		speed = newSpeed;
	}
	catch (...)
	{

	}
}

int Snake::GetHeadPositionX()
{
	try
	{
		return headPositionX;
	}
	catch (...)
	{

	}
}

void Snake::SetHeadPositionX(int headX)
{
	try
	{
		headPositionX = headX;
	}
	catch (...)
	{

	}
}

int Snake::GetHeadPositionY()
{
	try
	{
		return headPositionY;
	}
	catch (...)
	{

	}
}

void Snake::SetHeadPositionY(int headY)
{
	try
	{
		headPositionY = headY;
	}
	catch (...)
	{

	}
}

Direction Snake::GetSnakeDirection()
{
	try
	{
		return snakeDirection;
	}
	catch (...)
	{

	}
}

void Snake::SetSnakeDirection(Direction newDirection) 
{
	try
	{
		snakeDirection = newDirection;
	}
	catch (...)
	{

	}
}