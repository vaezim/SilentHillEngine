#include "SHengine/game.h"


int main()
{
    SHengine::Game game;
    
    if (game.CreateWindow() != SHengine::SUCCESS) {
        return 1;
    }

    game.SetupCallbackFunctions();
    game.Run();
    
    return 0;
}