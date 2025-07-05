#include <iostream>
#include "raylib.h"
#include "game.h"//Game handler

const int WIDTH = 800, HEIGHT = 600;

int main(void){
    //All this will be changeable in the settings in the future
    InitWindow(WIDTH, HEIGHT, "Monitored");
    SetTargetFPS(60);

    GameHandler game = GameHandler();

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);
            game.handleGameLoop();
        EndDrawing();
    }

    printf("Game closing...");
    return 0;
}