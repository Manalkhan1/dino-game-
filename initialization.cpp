void init() {
    system("cls"); 
    gameover = 0;
    gotoxy(3, 2); cout << "SCORE : ";
    for (int i = 0; i < 79; i++){
        gotoxy(1 + i, 1); cout << "ß";
        gotoxy(1 + i, 25); cout << "ß";
    } 
}

