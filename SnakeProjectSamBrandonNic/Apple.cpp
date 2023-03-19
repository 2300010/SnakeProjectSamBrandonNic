#include "Apple.h"
#include "AppleGenerator.h"
#include "Snake.h"

// Constructor to initialize the apple 
Apple::Apple()
{

}

// Spawn the apple at a random position
void Apple::Spawn(int xLimit, int yLimit)
{
    // Generate a random x and y position for the apple using the AppleGenerator class
    m_x = Random::Get().GenInt(xLimit);
    m_y = Random::Get().GenInt(yLimit);
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