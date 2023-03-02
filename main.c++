#include <iostream>
#include <string>
#include <array>
#include "lib/graphics.h"
#include "lib/winbgim.h"
#include "src/game.h"

using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

int startGame(const int &debug)
{
    initwindow(400, 300, "Test");
    circle(100, 50, 40);
    while (!kbhit())
    {
        delay(200);
    }
    return 0;
}

int main()
{
    bool debug = true;
    if (debug)
    {
        cout << "Debug mode" << endl;
        cout << "----------------" << endl;
    }
    startGame(debug);
    return 0;
}