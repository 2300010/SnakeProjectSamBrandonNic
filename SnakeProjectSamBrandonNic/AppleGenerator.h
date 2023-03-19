#pragma once

#include "Random.h"

// Apple generator class for generating random positions for apples
class AppleGenerator
{

public:
    // Static method to get the singleton instance of the 
    bool isAppleInMap = false;
    int mapXlimit = 0;
    int mapYlimit = 0;
    static AppleGenerator& Get();

    // Seed the random number generator
    void Seed();

    // Generate a random integer position within the maximum x range
    int GenIntPositionX();

    // Generate a random integer position within the maximum y range
    int GenIntPositionY();

private:
    // Private constructor to prevent instantiation
    AppleGenerator();

    // Delete copy constructor and assignment operator to prevent copying
    AppleGenerator(const AppleGenerator&) = delete;
    AppleGenerator& operator=(const AppleGenerator&) = delete;
};


