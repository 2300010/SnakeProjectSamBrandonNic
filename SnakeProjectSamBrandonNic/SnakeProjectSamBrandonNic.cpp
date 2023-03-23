// SnakeProjectSamBrandonNic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "SnakeManager.h"
#include "Snake.h"
#include "GameManager.h"
#include "MapManager.h"

using namespace std;

void DrawMap(MapManager myMapManager);

int main()
{
    try
    {
        //Declare object of MapManager
        MapManager myMapManager;
        SnakeManager mySnakeManager;
        Snake mySnake;

        myMapManager.InitMap();

        mySnakeManager.SetupStartingSnake(myMapManager.GetMapHeight(), myMapManager.GetMapWidth());

        myMapManager.SetSnakePosition(mySnakeManager);

        while (true)
        {
            
            DrawMap(myMapManager);

            system("Pause");

            mySnakeManager.Move();
        }
        //GameManager myGameManager;
    }
    catch (...)
    {

    }
}

//Draws the map
void DrawMap(MapManager myMapManager)
{
    //Loop on X and on Y of the map array to print the map
    for (int i = 0; i < myMapManager.GetMapHeight(); i++)
    {
        for (int j = 0; j < myMapManager.GetMapWidth(); j++)
        {
            //Prints the character at said position
            cout << myMapManager.map[i][j];
        }
        cout << endl;
    }
}
