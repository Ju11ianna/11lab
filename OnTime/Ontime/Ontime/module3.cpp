#include <iostream>
#include <fstream> //дл¤ раюоты с внешними файлами
#include <string>
#include <windows.h>
using namespace std;
void module3()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");

    string line;

    ifstream file("C:\\Users\\Yaroslav\\Desktop\\OnTime\\Ontime\\Ontime\\hello.txt"); // окрываем файл дл¤ чтени¤
    if (file.is_open())
    {
        while (getline(file, line))
        {
            cout << line << std::endl;
        }
    }
    file.close();     // закрываем файл

    ofstream fout;

    fout.open("C:\\Users\\Yaroslav\\Desktop\\OnTime\\Ontime\\Ontime\\hello.txt", ofstream::app);
    if (!fout.is_open()) {
        cout << "Файл не открылся" << endl;
    }
    else {
        string note;
        bool flag = true;
        while (flag) {
            cout << "Введите вашу заметку: ";
            cin.ignore(cin.rdbuf()->in_avail());
            getline(cin, note);
            fout << "\n";
            for (int i = 0; i < note.length(); i++) {

                fout << note[i];
            }
            int a;
            cout << "Создать новую заметку?(1-да; 2-нет; 3-очистить заметки) ";
            cin >> a;
            cout << endl;
            switch (a) {
            case 1:
                break;
            case 2:
                flag = false;
                break;
            case 3:
                fout.close();
                std::ofstream ofs;
                ofs.open("C:\\Users\\Yaroslav\\Desktop\\OnTime\\Ontime\\Ontime\\hello.txt", std::ofstream::out | std::ofstream::trunc);
                ofs.close();
                flag = false;
                break;
            }
        }
    }
    cout << "End of program" << endl;
}