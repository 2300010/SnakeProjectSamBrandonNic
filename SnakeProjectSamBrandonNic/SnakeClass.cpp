#include "SnakeClass.h"

//Definition get-set for variables
int SnakeClass::GetBodyLength()
{
	return bodyLength;
}

void SnakeClass::SetBodyLength(int newLength)
{
	bodyLength = newLength;
}

int SnakeClass::GetSpeed()
{
	return speed;
}

void SnakeClass::SetSpeed(int newSpeed)
{
	speed = newSpeed;
}
