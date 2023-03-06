#include <iostream>
#include <string>
#include <array>
#include "lib/graphics.h"
#include "lib/winbgim.h"
#include "src/game.h"

using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int REFRESH_DELAY = 200;
const bool DEBUG = true;

void verbose(const string &message, const bool &verbose)
{
    if (verbose){
        cout << message << endl;
    }
}

int startGame()
{
    initwindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Test");
    verbose("Window initialized", DEBUG);
    while (!kbhit())
    {
        delay(REFRESH_DELAY);
    }
    verbose("Game ended", DEBUG);
    return 0;
}

int main()
{
    startGame();
    return 0;
}