#include <iostream>
#include <fstream> //�� ������ � �������� �������
#include <string>
#include <windows.h>
using namespace std;
void module3()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");

    string line;

    ifstream file("C:\\Users\\Yaroslav\\Desktop\\OnTime\\Ontime\\Ontime\\hello.txt"); // �������� ���� �� �����
    if (file.is_open())
    {
        while (getline(file, line))
        {
            cout << line << std::endl;
        }
    }
    file.close();     // ��������� ����

    ofstream fout;

    fout.open("C:\\Users\\Yaroslav\\Desktop\\OnTime\\Ontime\\Ontime\\hello.txt", ofstream::app);
    if (!fout.is_open()) {
        cout << "���� �� ��������" << endl;
    }
    else {
        string note;
        bool flag = true;
        while (flag) {
            cout << "������� ���� �������: ";
            cin.ignore(cin.rdbuf()->in_avail());
            getline(cin, note);
            fout << "\n";
            for (int i = 0; i < note.length(); i++) {

                fout << note[i];
            }
            int a;
            cout << "������� ����� �������?(1-��; 2-���; 3-�������� �������) ";
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