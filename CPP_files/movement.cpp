#include <conio.h>
#include <iostream>
#include <print_map.hpp>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

void drawPlayer(int x, int y) {
    // gotoxy(x, y, '@');
    printf("\033[%d;%dH@", (y), (x));
}

void clearPlayer(int x, int y, char temp_tile) {
    printf("\033[%d;%dH%c", (y), (x), temp_tile);
}

void movement(int my_map[][30], int* x, int* y, char* temp_tile){

    char temp_tile;
    int arrow_key = 0;
    arrow_key = 0;
    switch((arrow_key=getch())) {
        case KEY_UP:
            clearPlayer(*x, *y, *temp_tile);
            *y--;
            *temp_tile = my_map[*y][*x];
            drawPlayer(*x, *y);
            break;
        case KEY_DOWN:
            clearPlayer(*x, *y, *temp_tile);
            *y++;
            *temp_tile = my_map[*y][*x];
            drawPlayer(*x, *y);
            break;
        case KEY_LEFT:
            clearPlayer(*x, *y, *temp_tile);
            *x--;
            *temp_tile = my_map[*y][*x];
            drawPlayer(*x, *y);
            break;
        case KEY_RIGHT:
            clearPlayer(*x, *y, *temp_tile);
            *x++;
            *temp_tile = my_map[*y][*x];
            drawPlayer(*x, *y);
            break;
        default:
            break;
    }
}