void play(){ 
    system("cls");
    char ch;
    int i;
    init();
    while (true) {
        while (!kbhit()) {
            if (gameover == 1) {
                return;
            }
            moveDino();
            drawHurdle();
        }
        ch = getch();
        if (ch == 32) {
            i = 0;
            while (i < 12) {
                moveDino(1);
                drawHurdle();
                i++;
            }
            while (i > 0) {
                moveDino(2);
                drawHurdle();
                i--;
            }
        } else if (ch == 'p' || ch == 'P') {
            getch();
        } else if (ch == 27) {
            break;
        }
    }
}

