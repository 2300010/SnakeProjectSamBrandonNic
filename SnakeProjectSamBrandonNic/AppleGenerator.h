#pragma once
#include "Apple.h"
#include "Random.h"

class AppleGenerator
{
	bool isAppleInMap = false;
	int mapXlimit = 0 ;
	int mapYlimit = 0 ;

public :

	AppleGenerator(int mapXlimit, int mapYlimit);

	bool getIsAppleInMap();

	void genApple();

};


