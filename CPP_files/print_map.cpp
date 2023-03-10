#include <iostream>
#include <windows.h>
#include "print_map.hpp"

using namespace std; 

#define GrassColor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
#define NormalColor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
#define BlueColor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
#define RedColor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);

void PrintMap(char my_map[][30]) {
    GrassColor();
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (my_map[i][j] == '.') {
                GrassColor();
                cout << my_map[i][j];
            }
            else if (my_map[i][j] == '~'){
                BlueColor();
                cout << my_map[i][j];
            }
            else if (my_map[i][j] == '@') {
                RedColor();
                cout << my_map[i][j];
            }
            else{
                NormalColor();
                cout << my_map[i][j];
            }
        }
        cout << endl;
    }
    NormalColor();
}
