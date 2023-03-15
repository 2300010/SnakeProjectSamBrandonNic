//Samuel Creation and definition of the functions

#include "Snake.h"

//Definition get-set for variables
int Snake::GetBodyLength()
{
	return bodyLength;
}

void Snake::SetBodyLength(int newLength)
{
	bodyLength = newLength;
}

int Snake::GetSpeed()
{
	return speed;
}

void Snake::SetSpeed(int newSpeed)
{
	speed = newSpeed;
}
