#include "iostream"
#include "windows.h"

using namespace std;
COORD position;
HANDLE handleOut = GetStdHandle(STD_OUTPUT_HANDLE);
SYSTEMTIME Time;
bool tf = true;
int x = 0, y = 0;

void _0(int x, int y)
{
    position.X = x + 0;
    position.Y = y + 0;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "  " << char(178);
    position.Y = y + 2;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "  " << char(178);
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "  " << char(178);
    position.Y = y + 4;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
}
void _1(int x, int y)
{
    position.X = x + 0;
    position.Y = y + 0;
    SetConsoleCursorPosition(handleOut, position);
    cout << " " << char(178) << char(178) << " ";
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << "  " << char(178) << " ";
    position.Y = y + 2;
    SetConsoleCursorPosition(handleOut, position);
    cout << "  " << char(178) << " ";
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << "  " << char(178) << "  ";
    position.Y = y + 4;
    SetConsoleCursorPosition(handleOut, position);
    cout << " " << char(178) << char(178) << char(178);
}

void _2(int x, int y)
{
    position.X = x + 0;
    position.Y = y + 0;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << "   " << char(178);
    position.Y = y + 2;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "   ";
    position.Y = y + 4;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
}
void _3(int x, int y)
{
    position.X = x + 0;
    position.Y = y + 0;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << "   " << char(178);
    position.Y = y + 2;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << "   " << char(178);
    position.Y = y + 4;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
}

void _4(int x, int y)
{
    position.X = x + 0;
    position.Y = y + 0;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "  " << char(178);
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "  " << char(178);
    position.Y = y + 2;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << "   " << char(178);
    position.Y = y + 4;
    SetConsoleCursorPosition(handleOut, position);
    cout << "   " << char(178);
}
void _5(int x, int y)
{
    position.X = x + 0;
    position.Y = y + 0;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "   ";
    position.Y = y + 2;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << "   " << char(178);
    position.Y = y + 4;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
}
void _6(int x, int y)
{
    position.X = x + 0;
    position.Y = y + 0;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "   ";
    position.Y = y + 2;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "  " << char(178);
    position.Y = y + 4;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
}
void _7(int x, int y)
{
    position.X = x + 0;
    position.Y = y + 0;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << "   " << char(178);
    position.Y = y + 2;
    SetConsoleCursorPosition(handleOut, position);
    cout << "  " << char(178) << " ";
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << " " << char(178) << "  ";
    position.Y = y + 4;
    SetConsoleCursorPosition(handleOut, position);
    cout << " " << char(178) << "  ";
}
void _8(int x, int y)
{
    position.X = x + 0;
    position.Y = y + 0;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "  " << char(178);
    position.Y = y + 2;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "  " << char(178);
    position.Y = y + 4;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
}
void _9(int x, int y)
{
    position.X = x + 0;
    position.Y = y + 0;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << "  " << char(178);
    position.Y = y + 2;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << "   " << char(178);
    position.Y = y + 4;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178) << char(178) << char(178) << char(178);
}
void main()
{
    x = 20;
    y = 9;
    system("color 1e");
    system("cls");
    position.X = 22 + x;
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178);
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178);
    position.X = 10 + x;
    position.Y = y + 1;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178);
    position.Y = y + 3;
    SetConsoleCursorPosition(handleOut, position);
    cout << char(178);
    while (true)
    {
        GetLocalTime(&Time);
        if (Time.wMinute == 0 || tf == true)
        {
            if (Time.wHour < 10) _0(x, y);
            if (Time.wHour < 20 && Time.wHour >= 10) _1(x, y);
            if (Time.wHour < 30 && Time.wHour >= 20) _2(x, y);
            if (Time.wHour < 40 && Time.wHour >= 30) _3(x, y);
            if (Time.wHour < 50 && Time.wHour >= 40) _4(x, y);
            if (Time.wHour >= 50) _5(x, y);
            switch (Time.wHour % 10)
            {
            case 0: { _0(x + 5, y); break; }
            case 1: { _1(x + 5, y); break; }
            case 2: { _2(x + 5, y); break; }
            case 3: { _3(x + 5, y); break; }
            case 4: { _4(x + 5, y); break; }
            case 5: { _5(x + 5, y); break; }
            case 6: { _6(x + 5, y); break; }
            case 7: { _7(x + 5, y); break; }
            case 8: { _8(x + 5, y); break; }
            case 9: { _9(x + 5, y); break; }
            }
        }
        if (Time.wSecond == 0 || tf == true)
        {
            if (Time.wMinute < 10) _0(x + 12, y);
            if (Time.wMinute < 20 && Time.wMinute >= 10) _1(x + 12, y);
            if (Time.wMinute < 30 && Time.wMinute >= 20) _2(x + 12, y);
            if (Time.wMinute < 40 && Time.wMinute >= 30) _3(x + 12, y);
            if (Time.wMinute < 50 && Time.wMinute >= 40) _4(x + 12, y);
            if (Time.wMinute >= 50) _5(x + 12, y);
            switch (Time.wMinute % 10)
            {
            case 0: { _0(x + 17, y); break; }
            case 1: { _1(x + 17, y); break; }
            case 2: { _2(x + 17, y); break; }
            case 3: { _3(x + 17, y); break; }
            case 4: { _4(x + 17, y); break; }
            case 5: { _5(x + 17, y); break; }
            case 6: { _6(x + 17, y); break; }
            case 7: { _7(x + 17, y); break; }
            case 8: { _8(x + 17, y); break; }
            case 9: { _9(x + 17, y); break; }
            }
        }
        if (Time.wSecond < 10) _0(x + 24, y);
        if (Time.wSecond < 20 && Time.wSecond >= 10) _1(x + 24, y);
        if (Time.wSecond < 30 && Time.wSecond >= 20) _2(x + 24, y);
        if (Time.wSecond < 40 && Time.wSecond >= 30) _3(x + 24, y);
        if (Time.wSecond < 50 && Time.wSecond >= 40) _4(x + 24, y);
        if (Time.wSecond >= 50) _5(x + 24, y);
        switch (Time.wSecond % 10)
        {
        case 0: { _0(x + 29, y); break; }
        case 1: { _1(x + 29, y); break; }
        case 2: { _2(x + 29, y); break; }
        case 3: { _3(x + 29, y); break; }
        case 4: { _4(x + 29, y); break; }
        case 5: { _5(x + 29, y); break; }
        case 6: { _6(x + 29, y); break; }
        case 7: { _7(x + 29, y); break; }
        case 8: { _8(x + 29, y); break; }
        case 9: { _9(x + 29, y); break; }
        }
        if (Time.wSecond == 0) Sleep(500);
        else Sleep(460);
        tf = false;
    }
    cin.get();
}