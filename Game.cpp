#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

const int HEIGHT = 30, WIDTH = 55;
int x = 0, y = 0; //Primary player coordinates...global :-O

void GrassColor() {
    SetConsoleTextAttribute
        (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}

void NormalColor() {
    SetConsoleTextAttribute
        (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}

void BlueColor() {
    SetConsoleTextAttribute
        (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}

void RedColor() {
    SetConsoleTextAttribute
        (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
}

// Read from the text file
char myMap[HEIGHT][WIDTH];

void PrintMap() {
   
    cout << "(" << x << ',' << y << ")" << endl;
    GrassColor();
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (myMap[i][j] == '.') {
                GrassColor();
                cout << myMap[i][j];
            }
            else if (myMap[i][j] == '~') {
                BlueColor();
                cout << myMap[i][j];
            }
            else if (myMap[i][j] == '@') {
                RedColor();
                cout << myMap[i][j];
            }
            else {
                NormalColor();
                cout << myMap[i][j];
            }
        }
        cout << endl;
    }
    NormalColor();
}

int main() {
    char input; //For user input.
    char temp_tile = myMap[y][x]; // '.' (0, 0);
    myMap[y][x] = '@'; // '@' (0, 0);
    ifstream MyReadFile("Level.txt");
    string myText;
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            MyReadFile >> myMap[i][j];
        }
    }
    MyReadFile.close();
    PrintMap();

    while (true) {
        input = getch(); // get user input
        system("cls");
        if (input == 's' && y < HEIGHT - 1) { 
            myMap[y][x] = temp_tile;
            y++;
            temp_tile = myMap[y][x];
            myMap[y][x] = '@';
        }
        else if (input == 'd' && x < WIDTH - 1) {
            myMap[y][x] = temp_tile;
            x++;
            temp_tile = myMap[y][x];
            myMap[y][x] = '@';
        }
        else if (input == 'w' && y > 0) {
            myMap[y][x] = temp_tile;
            y--;
            temp_tile = myMap[y][x];
            myMap[y][x] = '@';
        }
        else if (input == 'a' && x > 0) {
            myMap[y][x] = temp_tile;
            x--;
            temp_tile = myMap[y][x];
            myMap[y][x] = '@';
            
        }
        else if(input == 'q'){
            break;
        };
        PrintMap();
    }
    system("PAUSE");
    return 0;
}