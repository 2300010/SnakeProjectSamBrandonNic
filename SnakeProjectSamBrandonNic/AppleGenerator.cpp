#include "AppleGenerator.h"

// Private constructor to prevent instantiation
AppleGenerator::AppleGenerator()
{
}

// Static method to get the singleton instance of the class
AppleGenerator& AppleGenerator::Get()
{
    static AppleGenerator instance;
    return instance;
}

// Seed the random number generator
void AppleGenerator::Seed()
{
    Random::Get().Seed();
}

// Generate a random integer position within the maximum x range
int AppleGenerator::GenIntPositionX()
{
    return Random::Get().GenInt(mapXlimit);
}

// Generate a random integer position within the maximum y range
int AppleGenerator::GenIntPositionY()
{
    return Random::Get().GenInt(mapYlimit);
}




