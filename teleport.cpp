void teleport() {
    if (x == 0 && y == WIDTH/2) { // Teleport to (15, 0)
        x = HEIGHT/2 + 1;
        y = WIDTH/2;
    }
    else if (x == HEIGHT/2 + 1 && y == 0) { 
        x = HEIGHT/2 + 1;
        y = WIDTH/2;
    }
    else if (x == 15 && y == WIDTH/2) { 
        x = HEIGHT/2 + 1;
        y = WIDTH/2;
    }
    else if (x == HEIGHT/2 + 1 && y == WIDTH) { 
        x = HEIGHT/2 + 1;
        y = WIDTH/2;
    }
}