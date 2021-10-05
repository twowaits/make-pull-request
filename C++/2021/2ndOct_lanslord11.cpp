#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
void gotoxy(int x, int y)
{
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}
int main()
{
    int a, b, dir = 1;
    int x = 0, y = 0;
    printf("Enter the two numbers:");
    scanf("%d%d", &a, &b);
    system("cls");
    for (int i = 1; i <= b; i++)
    {
        gotoxy(x, y);
        printf("%d", i);
        x += 2;
        if (dir)
            y++;
        if (!dir)
            y--;
        if (y == 0)
            dir = 1;
        if (y == a - 1)
            dir = 0;
    }
    gotoxy(0, a);
}