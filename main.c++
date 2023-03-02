#include <iostream>
#include <string>
#include <vector>
#include "src/game.h"
#include "src/winbgim.h"

using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

int startGame(const int &debug)
{
    initwindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Bataille Navale");
    
    return 0;
}

int main()
{
    bool debug = true;
    if (debug) {
        cout << "Debug mode" << endl;
        cout << "----------------" << endl;
    }
    startGame(debug);
    return 0;
}