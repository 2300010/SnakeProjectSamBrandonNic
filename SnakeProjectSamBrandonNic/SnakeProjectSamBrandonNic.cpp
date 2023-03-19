// SnakeProjectSamBrandonNic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "SnakeManager.h"
#include "Snake.h"
#include "GameManager.h"

using namespace std;

void SnakeTest();
void PrintSnake(SnakeManager mySnakeManager);

int main()
{
    try
    {
        GameManager myGameManager;
        /*while (myGameManager.GetIsPlaying() == true)
        {

        }*/
        SnakeTest();
    }
    catch (...)
    {

    }
}

void SnakeTest()
{
    try
    {
        SnakeManager mySnakeManager;

        mySnakeManager.SetupStartingSnake();

        PrintSnake(mySnakeManager);

        system("Pause");
    }
    catch (...)
    {

    }
}

void PrintSnake(SnakeManager mySnakeManager) 
{
    try
    {
        for (int i = 0; i < mySnakeManager.mySnake.GetBodyLength(); i++)
        {
            cout << mySnakeManager.snakeParts[i];
        }
    }
    catch (...)
    {

    }
}