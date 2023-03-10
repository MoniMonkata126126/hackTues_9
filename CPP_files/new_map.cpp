#include <iostream>
#include <fstream>
#include "print_map.hpp"
#include "new_map.hpp"

using namespace std;


void new_map(char my_map[30 ][55], string filename){
     system("cls");
     ifstream map_file(filename);
     for (int i = 0; i < HEIGHT; i++) {
        string line;
        getline(map_file, line);
        for (int j = 0; j < WIDTH; j++) {
            my_map[i][j] = line[j];
        }
    }
    map_file.close();
}
