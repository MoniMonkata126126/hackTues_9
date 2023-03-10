#include <iostream>
#include <windows.h>
#include "print_map.hpp"

using namespace std; 

#define GreenColor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
#define NormalColor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
#define BlueColor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
#define RedColor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);

void PrintMap(char my_Map[30][55]) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (my_Map[i][j] == '@') {
                BlueColor();
            }
            else if(my_Map[i][j] == '$'){
                RedColor()
            }
            else{
                NormalColor();
            }
            cout << my_Map[i][j];
        }
        cout << endl;
    }
    NormalColor();
}
