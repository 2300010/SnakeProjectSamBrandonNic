//Samuel	Coding of methods InitMap and SetSnakePosition

#include "MapManager.h"


//Declare empty constructor
MapManager::MapManager() 
{
	SetScreenDimensions();
	map[GetMapHeight()][GetMapWidth()];
	InitMap();
	myApple.Spawn(SCREEN_WIDTH, SCREEN_HEIGHT);
}

//GETTERS AND SETTERS
int MapManager::GetMapHeight()
{
	return screenHeight;
}

int MapManager::GetMapWidth() 
{
	return screenWidth;
}

//DEFINITION OF METHODS
//Method that initiates the map
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

//Set screen dimension
void MapManager::SetScreenDimensions()
{
	HWND hwnd = GetForegroundWindow();
	RECT rect;
	GetWindowRect(hwnd, &rect);
	screenWidth = rect.right - rect.left;
	screenHeight = rect.bottom - rect.top;
}

//Set the snake starting position
void MapManager::SetSnakePosition(SnakeManager mySnakeManager)
{
	//Set the position of the body of the snake
	for (int i = 0; i < mySnakeManager.snakeParts.size(); i++)
	{
		//Declare variable to determine where to set the body parts
		int x = mySnakeManager.mySnake.GetHeadPositionX() - i - 1;
		int y = mySnakeManager.mySnake.GetHeadPositionY();

		//Verify if the last part position is still inside the map
		if (x >= 0)
		{
			//Set position of the next body part
			map[y][x] = mySnakeManager.snakeParts[i];
		}
	}
}

bool MapManager::CheckSnakeHeadCollisionWithScreen() {
	if (mySnakeManager.mySnake.GetSnakeDirection() == UP) {
		for (int i = 0; i < mySnakeManager.snakeBodyPositions.size(); i++) {
			if (mySnakeManager.mySnake.GetHeadPositionY() - 1 < 0) {
				return true;
			}
		}
	}
	else if (mySnakeManager.mySnake.GetSnakeDirection() == DOWN) {
		for (int i = 0; i < mySnakeManager.snakeBodyPositions.size(); i++) {
			if (mySnakeManager.mySnake.GetHeadPositionY() + 1 > SCREEN_HEIGHT) {
				return true;
			}
		}
	}
	else if (mySnakeManager.mySnake.GetSnakeDirection() == LEFT) {
		for (int i = 0; i < mySnakeManager.snakeBodyPositions.size(); i++) {
			if (mySnakeManager.mySnake.GetHeadPositionY() - 1 > 0 ) {
				return true;
			}
		}
	}
	else if (mySnakeManager.mySnake.GetSnakeDirection() == RIGHT) {
		for (int i = 0; i < mySnakeManager.snakeBodyPositions.size(); i++) {
			if (mySnakeManager.mySnake.GetHeadPositionY() + 1 == SCREEN_WIDTH) {
				return true;
			}
		}
	}
	return false;
}

// TO DO : update with next position variable instead of CheckSnakeHeadCollisionWithScreen
bool MapManager::CheckSnakeHeadCollisionWithBody() {
	try
	{
		if (mySnakeManager.mySnake.GetSnakeDirection() == UP) {
			for (int i = 0; i < mySnakeManager.snakeBodyPositions.size(); i++) {
				// Verify if snake head collisions with body after hitting the screen and going through the other side
				if (CheckSnakeHeadCollisionWithScreen()) {
					if (mySnakeManager.mySnake.GetHeadPositionX() == mySnakeManager.snakeBodyPositions.at(i).at(0)
						&& SCREEN_HEIGHT == mySnakeManager.snakeBodyPositions.at(i).at(1)) {
						return true;
					}
				}
				else {
					if (mySnakeManager.mySnake.GetHeadPositionX() == mySnakeManager.snakeBodyPositions.at(i).at(0)
						&& mySnakeManager.mySnake.GetHeadPositionY() - 1 == mySnakeManager.snakeBodyPositions.at(i).at(1)) {
						return true;
					}
				}
				
			}
		}
		else if (mySnakeManager.mySnake.GetSnakeDirection() == DOWN) {
			for (int i = 0; i < mySnakeManager.snakeBodyPositions.size(); i++) {
				// Verify if snake head collisions with body after hitting the screen and going through the other side
				if (CheckSnakeHeadCollisionWithScreen()) {
					if (mySnakeManager.mySnake.GetHeadPositionX() == mySnakeManager.snakeBodyPositions.at(i).at(0)
						&& 0 == mySnakeManager.snakeBodyPositions.at(i).at(1)) {
						return true;
					}
				}
				else {
					if (mySnakeManager.mySnake.GetHeadPositionX() == mySnakeManager.snakeBodyPositions.at(i).at(0)
						&& mySnakeManager.mySnake.GetHeadPositionY() + 1 == mySnakeManager.snakeBodyPositions.at(i).at(1)) {
						return true;
					}
				}
			}
		}
		else if (mySnakeManager.mySnake.GetSnakeDirection() == LEFT) {
			for (int i = 0; i < mySnakeManager.snakeBodyPositions.size(); i++) {
				// Verify if snake head collisions with body after hitting the screen and going through the other side
				if (CheckSnakeHeadCollisionWithScreen()) {
					if (SCREEN_WIDTH == mySnakeManager.snakeBodyPositions.at(i).at(0)
						&& mySnakeManager.mySnake.GetHeadPositionY() == mySnakeManager.snakeBodyPositions.at(i).at(1)) {
						return true;
					}
				}
				else {
					if (mySnakeManager.mySnake.GetHeadPositionX() - 1 == mySnakeManager.snakeBodyPositions.at(i).at(0)
						&& mySnakeManager.mySnake.GetHeadPositionY() == mySnakeManager.snakeBodyPositions.at(i).at(1)) {
						return true;
					}
				}
			}
		}
		else if (mySnakeManager.mySnake.GetSnakeDirection() == RIGHT) {
			for (int i = 0; i < mySnakeManager.snakeBodyPositions.size(); i++) {
				// Verify if snake head collisions with body after hitting the screen and going through the other side
			if (CheckSnakeHeadCollisionWithScreen()) {
				if ( 0 == mySnakeManager.snakeBodyPositions.at(i).at(0)
					&& mySnakeManager.mySnake.GetHeadPositionY() == mySnakeManager.snakeBodyPositions.at(i).at(1)) {
					return true;
				}
			}
			else {
				if (mySnakeManager.mySnake.GetHeadPositionX() + 1 == mySnakeManager.snakeBodyPositions.at(i).at(0)
					&& mySnakeManager.mySnake.GetHeadPositionY() + 1 == mySnakeManager.snakeBodyPositions.at(i).at(1)) {
					return true;
					}
				}
			}
		}
		return false;
	}
	catch (const std::exception&)
	{

	}
}

// TO DO : update with next position variable instead 
bool MapManager::CheckSnakeHeadCollisionWithApple() {
	try
	{
		if (mySnakeManager.mySnake.GetSnakeDirection() == UP) {
			return (mySnakeManager.mySnake.GetHeadPositionX() == myApple.GetX() &&
				mySnakeManager.mySnake.GetHeadPositionY() - 1 == myApple.GetY());
		}
		else if (mySnakeManager.mySnake.GetSnakeDirection() == DOWN) {
			return (mySnakeManager.mySnake.GetHeadPositionX() == myApple.GetX() &&
				mySnakeManager.mySnake.GetHeadPositionY() + 1 == myApple.GetY());
		}
		else if (mySnakeManager.mySnake.GetSnakeDirection() == LEFT) {
			return (mySnakeManager.mySnake.GetHeadPositionX() - 1 == myApple.GetX() &&
				mySnakeManager.mySnake.GetHeadPositionY() == myApple.GetY());
		}
		else if (mySnakeManager.mySnake.GetSnakeDirection() == RIGHT) {
			return (mySnakeManager.mySnake.GetHeadPositionX() + 1 == myApple.GetX() &&
				mySnakeManager.mySnake.GetHeadPositionY() == myApple.GetY());
		}
		return false;
		
	}
	catch (const std::exception&)
	{

	}
}

//Making sure apple doesn't spawn on top of snake
bool MapManager::CheckAppleSpawnCollision() {

	if (mySnakeManager.mySnake.GetHeadPositionX() == myApple.GetX() &&
		mySnakeManager.mySnake.GetHeadPositionY() == myApple.GetY()) {
		return true;
	}
	// Making sure Apple doesnt appear in front of snake's head
	if(mySnakeManager.nextPosition[0] == myApple.GetX() &&
		mySnakeManager.nextPosition[1] == myApple.GetY()) {
		return true;
	}
	else {
		for (int i = 0; i < mySnakeManager.snakeBodyPositions.size(); i++) {
			if (mySnakeManager.snakeBodyPositions.at(i).at(0) == myApple.GetX() &&
				mySnakeManager.snakeBodyPositions.at(i).at(1) == myApple.GetY()) {
				return true;
			}
		}
	}
	return false;
}

//Handle all collisions before moving
/*bool MapManager::handleCollisions() {
	try
	{
		if (CheckSnakeHeadCollisionWithBody()) {
			GameOver();
			return true;
		}
		else if (CheckSnakeHeadCollisionWithApple()) {

		}
		if () {

		}

		return false;
	}
	catch (const std::exception&)
	{

	}
} 
*/

//void MapManager::MoveSnake() {
//	mySnakeManager.Move();
//	UpdateSnakeNextPosition();
//}


void MapManager::SnakeEatsApple(){
	mySnakeManager.Grow();
	myApple.Spawn(SCREEN_WIDTH, SCREEN_HEIGHT);
	while (CheckAppleSpawnCollision()) {
		myApple.Spawn(SCREEN_WIDTH, SCREEN_HEIGHT);
	}
	UpdateSnakeNextPosition();

}

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
	catch (...)
	{

	}
}

//What to do when snake dies;
void MapManager::GameOver() {

}

