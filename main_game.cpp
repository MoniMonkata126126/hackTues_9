#include <iostream>
#include <Windows.h>
#include <fstream>
#include "movement.hpp"
#include "print_map.hpp"

using namespace std;


 //Primary player coordinates...global :-O


void teleport(int* x, int* y) {
    if (*x == WIDTH/2 && *y == 0) {
        *x = WIDTH/2;
        *y = HEIGHT;
    }
    else if (*x == 0 && *y == HEIGHT/2) { 
        *x = WIDTH;
        *y = HEIGHT/2;
    }
    else if (*x == WIDTH-1 && *y == HEIGHT/2) { 
        *x = 0;
        *y = HEIGHT/2;
    }
    else if (*x == WIDTH/2 && *y == HEIGHT-1) { 
        *x = WIDTH/2;
        *y = 0;
    }
}



int main() {

    int x = 0, y = 0;

    char my_map[30][55];

    ifstream map_file("1.txt");
     for (int i = 0; i < HEIGHT; i++) {
        string line;
        getline(map_file, line);
        for (int j = 0; j < WIDTH; j++) {
            my_map[i][j] = line[j];
        }
    }
    map_file.close();

    PrintMap(my_map); 
    while(true){
        movement(&x, &y);
        teleport(&x, &y);
    }
    return 0;
}