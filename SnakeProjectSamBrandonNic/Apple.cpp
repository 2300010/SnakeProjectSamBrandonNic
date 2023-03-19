#include "Apple.h"
#include "AppleGenerator.h"

// Constructor to initialize the apple and spawn it randomly
Apple::Apple()
{
    Spawn();
}

// Spawn the apple at a random position
void Apple::Spawn()
{
    // Generate a random x and y position for the apple using the AppleGenerator class
    m_x = AppleGenerator::Get().GenIntPositionX();
    m_y = AppleGenerator::Get().GenIntPositionY();
}

// Check if the apple collides with the snake
//bool Apple::CheckCollision(const Snake snake) const
//{
//    // Check if the x and y positions of the apple match the x and y positions of the snake's head
//    return (snake.GetX() == m_x && snake.GetY() == m_y);
//}

// Get the x position of the apple
int Apple::GetX() const
{
    return m_x;
}

// Get the y position of the apple
int Apple::GetY() const
{
    return m_y;
}