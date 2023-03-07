#include <iostream>
#include <string>
#include <array>
#include "lib/graphics.h"
#include "lib/winbgi.cpp"

using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int REFRESH_DELAY = 200;
const bool DEBUG = true;

void verbose(const string &message, const bool &verbose)
{
    if (verbose)
    {
        cout << message << endl;
    }
}

void createButton(int x, int y, int size_x, int size_y, string label = "")
{
    rectangle(x,y,size_x,size_y);
    
}

int startGame()
{
    initgraphsize(SCREEN_WIDTH, SCREEN_HEIGHT);

}

int main()
{
    startGame();
    return 0;
}