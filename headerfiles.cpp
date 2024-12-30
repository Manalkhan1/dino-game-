#include <iostream> 
#include <conio.h> 
#include <time.h>
#include <windows.h>

#define dinoPos 2
#define hurdlePos 74

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int dinoY;
int speed = 40;
int gameover = 0;

