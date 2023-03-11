#include <conio.h>
#include <iostream>
#include "movement.hpp"
#include "print_map.hpp"
#include "teleport.hpp"
#include "quest_one.hpp"
#include "quest_two.hpp"
#include "quest_three.hpp"
#include "quest_four.hpp"

using namespace std;



void check_for_map_npc(int& current_map){
    if(current_map == 1){
        run_quest_one();
    }
    else if(current_map == 2){
        run_quest_two();
    }
    else if(current_map == 3){
        run_quest_three();
    }
    else if(current_map == 4){
        run_quest_four();
    }
}


void drawPlayer(int x, int y) {
    printf("\033[%d;%dH@", (y), (x));
}

void clearPlayer(int x, int y) {
    printf("\033[%d;%dH.", (y), (x));
}

void movement(int& x, int& y, char my_map[30][55], int& current_map){

    drawPlayer(x, y);

    char arrow_key = getch();

    switch(arrow_key) {
        case 'w':
            if(my_map[y - 2][x] == '@' || my_map[y - 1][x] == '@'){
               teleport(x, y, current_map, my_map);
            }
            else if(my_map[y - 2][x] == '$' || my_map[y - 1][x] == '$'){
                system("cls");
                check_for_map_npc(current_map);
                PrintMap(my_map);
            }
            else if(my_map[y - 1][x] == '.'){
                clearPlayer(x, y);
                y--;
            }
            break;

        case 's':
            if(my_map[y + 2][x] == '@' || my_map[y + 1][x] == '@'){
               teleport(x, y, current_map, my_map);
            }
            else if(my_map[y + 2][x] == '$' || my_map[y + 1][x] == '$'){
                system("cls");
                check_for_map_npc(current_map);
                PrintMap(my_map);
            }
            else if(my_map[y + 1][x] == '.'){
                clearPlayer(x, y);
                y++;
            }
            break;

        case 'a':
            if(my_map[y][x - 2] == '@' || my_map[y][x - 1] == '@'){
               teleport(x, y, current_map, my_map);
            }
            else if(my_map[y][x - 2] == '$' || my_map[y][x - 1] == '$'){
                system("cls");
                check_for_map_npc(current_map);
                PrintMap(my_map);
            }
            else if(my_map[y][x - 1] == '.'){
                clearPlayer(x, y);  
                x--;    
            }
            break;

        case 'd':
            if(x > WIDTH - 1 || y > HEIGHT - 1){
                break;
            }
            if(my_map[y][x + 2] == '@' || my_map[y][x + 1] == '@'){
               teleport(x, y, current_map, my_map);
            }
            else if(my_map[y][x + 2] == '$' || my_map[y][x + 1] == '$'){
                system("cls");
                check_for_map_npc(current_map);
                PrintMap(my_map);
            }
            else if(my_map[y][x + 1] == '.'){
                clearPlayer(x, y);
                x++;
            }
            break;
        
        case 'q':
            system("cls");
            exit(42);

        default:
            break;
    }
}
