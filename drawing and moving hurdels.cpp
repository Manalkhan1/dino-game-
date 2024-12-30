void drawHurdle() {
    static int plantX = 0;
    static int score = 0;

    if (plantX == 56 && dinoY < 4) {
        score = 0;
        speed = 40;
        gotoxy(36, 8); cout << "Game Over";
        getch();
        gameover = 1; 
    }

    gotoxy(hurdlePos - plantX, 20); cout << "| | ";
    gotoxy(hurdlePos - plantX, 21); cout << "| | ";
    gotoxy(hurdlePos - plantX, 22); cout << "|_| ";
    gotoxy(hurdlePos - plantX, 23); cout << " |  ";
    gotoxy(hurdlePos - plantX, 24); cout << " |  ";

    plantX++;

    if (plantX == 73) {
        plantX = 0;
        score++;
        gotoxy(11, 2); cout << "     ";
        gotoxy(11, 2); cout << score;
        if (speed > 20)
            speed--;
    }
}

