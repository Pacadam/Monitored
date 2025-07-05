#pragma once

enum GameState { MENU, PLAYING, GAMEOVER };//The game's current state

class GameHandler {
public:
	//Gameplay values will go here
	int screenWidth = 50;
	
	GameState gameState;
	GameHandler();
	void handleGameLoop();//TODO:
private:
	void setupMainMenu();
};

