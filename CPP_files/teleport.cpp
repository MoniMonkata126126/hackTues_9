#include <iostream>
#include "teleport.hpp"
#include "print_map.hpp"
#include "new_map.hpp"

void teleport(int& x, int& y, int& current_map, char my_map[30][55]) {
    cout << current_map << endl;
    if (current_map == 1 && x > WIDTH/2 + 5) {
        current_map = 2;
        new_map(my_map, "2.txt");
        x = 6;
        y = HEIGHT / 2; 
    }
    else if(current_map == 1  && y > HEIGHT / 2){
        new_map(my_map, "4.txt");
        x = WIDTH / 2;
        y = 6;
        current_map = 4;
    }
    else if (current_map == 2 && x <  WIDTH /2 - 5) {
        new_map(my_map, "1.txt");
        x = WIDTH / 2;
        y = HEIGHT / 2;
        current_map = 1;
    }
    else if(current_map == 2 && y > HEIGHT / 2){
        new_map(my_map, "3.txt");
        x = WIDTH / 2;
        y = 6;
        current_map = 3;
    }
    else if (current_map == 3 && x < WIDTH/2 - 5) {
        new_map(my_map, "4.txt");
        x = WIDTH - 10;
        y = HEIGHT / 2;
        current_map = 4;
    }
    else if(current_map == 3 && y < HEIGHT / 2 - 5){
        new_map(my_map, "2.txt");
        x = WIDTH / 2;
        y = HEIGHT - 6;
        current_map = 2;
    }
    else if (current_map == 4 && x > WIDTH/2 + 5) {
        new_map(my_map, "3.txt");
        x = 6;
        y = HEIGHT / 2;
        current_map = 3;
    }
    else if(current_map == 4  && y < HEIGHT / 2 - 5){
        new_map(my_map, "1.txt");
        x = WIDTH / 2;
        y = HEIGHT- 6;
        current_map = 1;
    }
    PrintMap(my_map);
}