#pragma once
#include <raylib.h>
#include <vector>

enum GameState { STARTING, MENU, PLAYING, GAMEOVER };//The game's current state

class GameHandler {
public:
	//Gameplay values will go here
	GameHandler();

	Vector2 mousePosition;
	GameState gameState;
	std::vector<Texture2D> videoFrames;
	int frameCount;
	float deltaTime;
	void handleGameLoop();//TODO:
private:
	float gameDelta();
	void displayDebug() const;
	void displayMenu() const;
	void displayStartingScene() const;
	void playVideo();
	void update();
};

