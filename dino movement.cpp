void moveDino(int jump = 0) {
    static int foot = 0;

    if (jump == 0)
        dinoY = 0;
    else if (jump == 2)
        dinoY--;
    else 
        dinoY++;

    gotoxy(dinoPos, 15 - dinoY); cout << "                 ";
    gotoxy(dinoPos, 16 - dinoY); cout << "         ÜÛßÛÛÛÛÜ";
    gotoxy(dinoPos, 17 - dinoY); cout << "         ÛÛÛÛÛÛÛÛ";
    gotoxy(dinoPos, 18 - dinoY); cout << "         ÛÛÛÛÛßßß";
    gotoxy(dinoPos, 19 - dinoY); cout << " Û      ÜÛÛÛÛßßß ";
    gotoxy(dinoPos, 20 - dinoY); cout << " ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ ";
    gotoxy(dinoPos, 21 - dinoY); cout << " ßÛÛÛÛÛÛÛÛÛÛÛ  ß ";
    gotoxy(dinoPos, 22 - dinoY); cout << "   ßÛÛÛÛÛÛÛß     ";
    gotoxy(dinoPos, 23 - dinoY);

    if (jump == 1 || jump == 2) {
        cout << "    ÛÛß ßÛ       ";
        gotoxy(2, 24 - dinoY);
        cout << "    ÛÜ   ÛÜ      ";
    } 
    else if (foot == 0) {
        cout << "    ßÛÛß  ßßß    ";
        gotoxy(2, 24 - dinoY);
        cout << "      ÛÜ         ";
        foot = !foot;
    } 
    else if (foot == 1) {
        cout << "     ßÛÜ ßÛ      ";
        gotoxy(2, 24 - dinoY);
        cout << "          ÛÜ     ";
        foot = !foot;
    }

    gotoxy(2, 25 - dinoY);
    if (jump == 0) {
        cout << "ßßßßßßßßßßßßßßßßß";
    } else {
        cout << "                ";
    } 
    Sleep(speed);
}

