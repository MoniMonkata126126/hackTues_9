#include <iostream>
#include <Windows.h>
#include <fstream>
#include "movement.hpp"
#include "print_map.hpp"

using namespace std;



int main() {

    int x = 28, y = 15;

    char my_map[30][55];
    int current_map = 1;
    ifstream map_file("1.txt");
     for (int i = 0; i < HEIGHT; i++) {
        string line;
        getline(map_file, line);
        for (int j = 0; j < WIDTH; j++) {
            my_map[i][j] = line[j];
        }
    }
    map_file.close();

    system("cls");

    PrintMap(my_map); 

    while(true){
        movement(x, y, my_map, current_map);

    }

    return 0;
}