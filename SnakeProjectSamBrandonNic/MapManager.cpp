//Samuel	Coding of methods InitMap and SetSnakePosition

#include "MapManager.h"


//Declare empty constructor
MapManager::MapManager() 
{
	InitMap();
	SetSnakePosition();
	NewApple();
}

//GETTERS AND SETTERS
int MapManager::GetMapHeight()
{
	return SCREEN_HEIGHT;
}

int MapManager::GetMapWidth() 
{
	return SCREEN_WIDTH;
}

//DEFINITION OF METHODS
// 
//Method that initiates the map : Sam
void MapManager::InitMap() 
{
	for (int i = 0; i < SCREEN_HEIGHT; i++)
	{
		for (int j = 0; j < SCREEN_WIDTH; j++)
		{
			map[i][j] = ' ';
		}
	}
}

//Set the snake starting position : Sam et Nicolas
void MapManager::SetSnakePosition(SnakeManager sm)
{
	
	//Set the position of the body of the snake
	for (int i = 0; i < sm.snakeBodyPositions.size(); i++)
	{
		//Declare variable to determine where to set the body parts
		int y = sm.snakeBodyPositions.at(i)[0];
		int x = sm.snakeBodyPositions.at(i)[1];

		//Verify if the last part position is still inside the map
		if (x >= 0)
		{
			//Set position of the next body part
			map[y][x] = sm.snakeParts[i];
		}
	}

	//Giving new next position
	UpdateSnakeNextPosition();

}


// Check if next Snake head movement is in collision with Snake's body : Nicolas
bool MapManager::CheckSnakeHeadCollisionWithBody() {
	try
	{
		return (map[mySnakeManager.nextPosition[0]][mySnakeManager.nextPosition[1]] == 'B');
	}
	catch (const std::exception&)
	{

	}
}


//Check if next Snake head movement is in collision with an Apple : Nicolas
bool MapManager::CheckSnakeHeadCollisionWithApple() {
	try
	{
		return (map[mySnakeManager.nextPosition[0]][mySnakeManager.nextPosition[1]] == 'A');
	}
	catch (const std::exception&)
	{

	}
}


// Method called on GameManager.Play(), if snake moves without colliding with anything : Nicolas 
void MapManager::MoveSnake() {
	vector<int> prevPosition;
	
	for (int i = 0; i < mySnakeManager.snakeBodyPositions.size(); i++) {	
		if (i == 0) {
			prevPosition = mySnakeManager.snakeBodyPositions.at(i);
			mySnakeManager.snakeBodyPositions.at(i) = mySnakeManager.nextPosition;
		}
		else {
			vector<int> temp = mySnakeManager.snakeBodyPositions.at(i);
			mySnakeManager.snakeBodyPositions.at(i) = prevPosition;
			prevPosition = temp;
		}
		map[mySnakeManager.snakeBodyPositions.at(i)[0]][mySnakeManager.snakeBodyPositions.at(i)[1]] =
			mySnakeManager.snakeParts[i];
	};

	//Update snake variable
	mySnakeManager.mySnake.SetHeadPositionY(mySnakeManager.nextPosition[0]);
	mySnakeManager.mySnake.SetHeadPositionX(mySnakeManager.nextPosition[1]);


	//update the next position after moving
	UpdateSnakeNextPosition();
}


//Method called on GameManager.Play() if snakes collides with apple : Nicolas
void MapManager::SnakeEatsApple(){
	mySnakeManager.Grow();
	NewApple();
	UpdateSnakeNextPosition();
}


//Method to add new apple and spawn it properly : Nicolas
void MapManager::NewApple() {
	myApple.Spawn(SCREEN_WIDTH, SCREEN_HEIGHT);
	while (CheckAppleSpawn()) {
		myApple.Spawn(SCREEN_WIDTH, SCREEN_HEIGHT);
	}
}


//Making sure apple doesn't spawn on top of snake : Nicolas
bool MapManager::CheckAppleSpawn() {
	// Making sure Apple doesnt appear in front of snake's head
	if (mySnakeManager.nextPosition[0] == myApple.GetX() &&
		mySnakeManager.nextPosition[1] == myApple.GetY()) {
		return true;
	}
	//Make sure Apple doesn't spawn directly on snake
	else {
		for (int i = 0; i < mySnakeManager.mySnake.GetBodyLength(); i++) {
			if (map[myApple.GetX()][myApple.GetY()] == 'B' || map[myApple.GetX()][myApple.GetY()] == 'H') {
				return true;
			}
		}
	}
	return false;
}


//Function that updates Snakes next head position, called everytime snake moves : Nicolas
void MapManager::UpdateSnakeNextPosition() {
	try
	{
		if (mySnakeManager.mySnake.GetSnakeDirection() == UP) {
			if (mySnakeManager.nextPosition[1] == 0) {
				mySnakeManager.nextPosition[1] = SCREEN_HEIGHT;
			}
			else {
				mySnakeManager.nextPosition[1] += 1;
			}
		}
		else if (mySnakeManager.mySnake.GetSnakeDirection() == DOWN) {
			if (mySnakeManager.nextPosition[1] == SCREEN_HEIGHT) {
				mySnakeManager.nextPosition[1] = 0;
			}
			else {
				mySnakeManager.nextPosition[1] -= 1;
			}
		}
		else if (mySnakeManager.mySnake.GetSnakeDirection() == LEFT) {
			if (mySnakeManager.nextPosition[0] == 0) {
				mySnakeManager.nextPosition[0] = SCREEN_WIDTH;
			}
			else {
				mySnakeManager.nextPosition[0] -= 1;
			}
		}
		else if (mySnakeManager.mySnake.GetSnakeDirection() == RIGHT) {
			if (mySnakeManager.nextPosition[0] == SCREEN_WIDTH) {
				mySnakeManager.nextPosition[0] = 0;
			}
			else {
				mySnakeManager.nextPosition[0] += 1;
			}
		}
	}
	catch (const std::exception&)
	{

	}
}


