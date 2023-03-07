#include <iostream>
#include <string>
#include <array>
#include "lib/graphics.h"
#include "lib/winbgi.cpp"
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
    
}

int main()
{
    startGame();
    return 0;
}