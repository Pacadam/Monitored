#include <iostream>
#include "raylib.h"
#include "game.h"//Game handler

int main(){
    //All this will be changeable in the settings in the future
    InitWindow(800, 600, "Monitored");
    SetTargetFPS(60);

    auto game = GameHandler();

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