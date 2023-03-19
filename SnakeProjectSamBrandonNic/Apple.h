#pragma once

#include "Snake.h"

// Apple class representing the apple that the snake can eat
class Apple
{
public:
    // Constructor to initialize the apple and spawn it randomly
    Apple();

    // Spawn the apple at a random position
    void Spawn();

    // Check if the apple collides with the snake
    bool CheckCollision(const Snake& snake) const;

    // Get the x position of the apple
    int GetX() const;

    // Get the y position of the apple
    int GetY() const;

private:
    int m_x; // x position of the apple
    int m_y; // y position of the apple
};