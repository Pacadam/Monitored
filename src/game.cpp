#include "game.h"
#include "utils.h"
#include <iostream>

GameHandler::GameHandler()
{
	gameState = MENU;
	mousePosition = { 0, 0 };
	frameCount = 0;
	deltaTime = 0;
}

void GameHandler::handleGameLoop()
{
	frameCount++;
	if (frameCount > 60) {
		frameCount = 0;
	}
	mousePosition = (GetMousePosition());
	//Will try to display a video when the gamestate is starting
	switch (gameState) {
	case STARTING:
		//displayStartingScene();
		displayDebug();
		break;
	case MENU:
		playVideo();
		displayMenu();
		break;
	case PLAYING:
		//TODO::
		break;
	case GAMEOVER:
		//TODO::
		break;
	}
}

void update() {

}

float GameHandler::gameDelta() {
	//Calculate deltatime
	return 0;
}

void displayStartingScene() 
{
	//Here will be played startup video, "Created by" text(?) and then place on the menu screen
}

void GameHandler::displayMenu() const 
{
	//Display menu with clickable buttons
}

void GameHandler::displayDebug() const 
{
	DrawText(TextFormat("Debugging...Mouse position is %ix and %iy", (int)mousePosition.x, (int)mousePosition.y), GetScreenWidth()/2 - 200, GetScreenHeight()/2, 20, WHITE);
	DrawText(TextFormat("Frames: %i", frameCount), 20, 25, 20, WHITE);
	//Better way to center/place text?
}

void GameHandler::playVideo(){
	//Get image folder, slideshow with deltatime
	videoFrames = LoadImagesFromDirectory("src/assets/TitleFrames/");
	if (!videoFrames.empty()) {
		DrawTexture(videoFrames[frameCount % videoFrames.size()], 0, 0, BLACK);
	}
	else {
		std::cout << "ERROR: video not found!";
	}
}