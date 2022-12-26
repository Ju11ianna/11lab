#include <algorithm>
#include <stdlib.h>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <iomanip>
#include <Windows.h>
#include "module1.h"
#include "module2.h"
#include "module3.h"
#include "module4.h"
#pragma execution_character_set("unicode")
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int choice;
    do
    {
        cout << "=====================================" << std::endl;
        cout << "Выберите один из модулей приложения:" << endl;
        cout << "Модуль 1. (Отслеживание заданий)" << endl;
        cout << "Модуль 2. (Часы)" << endl;
        cout << "Модуль 3. (Блокнот для записей)" << endl;
        cout << "Моудль 4. (Уведомления) " << endl;
        cout << "5. Exit" << endl;
        cout << "=====================================" << std::endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Выбран модуль номер 1." << endl;
            module1();
            break;
        case 2:
            cout << "Выбран модуль номер 2." << endl;
            module2();
            break;
        case 3:
            cout << "Выбран модуль номер 3." << endl;
            module3();
            break;
        case 4:
            cout << "Выбран модуль номер 4." << endl;
            module4();
            break;
        case 5:
            cout << "Выход..." << endl;
            return 0;
        default:
            cout << "Invalid input, please try again." << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}