#include "game.h"

GameHandler::GameHandler()
{
	gameState = MENU;
}

void GameHandler::handleGameLoop()
{
	//Will try to display a video when the gamestate is in the menu
	switch(gameState)
		case MENU:
			break;

}
