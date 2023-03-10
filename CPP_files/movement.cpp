#include <conio.h>
#include <iostream>
#include "print_map.hpp"

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

void drawPlayer(int x, int y) {
    printf("\033[%d;%dH@", (y), (x));
}

void clearPlayer(int x, int y) {
    printf("\033[%d;%dH*", (y), (x));
}

void movement(int* x, int* y){

    drawPlayer(*x, *y);

    char arrow_key = getch();

    switch((arrow_key)) {
        case KEY_UP:
            clearPlayer(*x, *y);
            *y--;
            break;

        case KEY_DOWN:
            clearPlayer(*x, *y);
            *y++;
            break;

        case KEY_LEFT:
            clearPlayer(*x, *y);
            *x--;
            break;

        case KEY_RIGHT:
            clearPlayer(*x, *y);
            *x++;
            break;

        default:
            break;
    }
}