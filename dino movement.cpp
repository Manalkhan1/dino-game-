void moveDino(int jump = 0) {
    static int foot = 0;

    if (jump == 0)
        dinoY = 0;
    else if (jump == 2)
        dinoY--;
    else 
        dinoY++;

    gotoxy(dinoPos, 15 - dinoY); cout << "                 ";
    gotoxy(dinoPos, 16 - dinoY); cout << "         ��������";
    gotoxy(dinoPos, 17 - dinoY); cout << "         ��������";
    gotoxy(dinoPos, 18 - dinoY); cout << "         ��������";
    gotoxy(dinoPos, 19 - dinoY); cout << " �      �������� ";
    gotoxy(dinoPos, 20 - dinoY); cout << " ���  ���������� ";
    gotoxy(dinoPos, 21 - dinoY); cout << " ������������  � ";
    gotoxy(dinoPos, 22 - dinoY); cout << "   ���������     ";
    gotoxy(dinoPos, 23 - dinoY);

    if (jump == 1 || jump == 2) {
        cout << "    ��� ��       ";
        gotoxy(2, 24 - dinoY);
        cout << "    ��   ��      ";
    } 
    else if (foot == 0) {
        cout << "    ����  ���    ";
        gotoxy(2, 24 - dinoY);
        cout << "      ��         ";
        foot = !foot;
    } 
    else if (foot == 1) {
        cout << "     ��� ��      ";
        gotoxy(2, 24 - dinoY);
        cout << "          ��     ";
        foot = !foot;
    }

    gotoxy(2, 25 - dinoY);
    if (jump == 0) {
        cout << "�����������������";
    } else {
        cout << "                ";
    } 
    Sleep(speed);
}

