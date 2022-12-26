/*#include <iostream>
#include <ctime>
#include <Windows.h>
#include <string>

void module4() {
    setlocale(LC_ALL, "rus");
    std::cout << "������� ���� � ����� ����������� (����� ����� ��� ��� ������): ";

    // ��������� ���� � ����� �����������
    int day, month, year, hour, minute;
    std::cin >> day >> month >> year >> hour >> minute;

    // ������� ��������� tm ��� �������� ���� � �������
    tm notification_time;
    notification_time.tm_year = year - 1900; // ���� ���������� � 1900
    notification_time.tm_mon = month - 1; // ������ ���������� � 0
    notification_time.tm_mday = day;
    notification_time.tm_hour = hour;
    notification_time.tm_min = minute;
    notification_time.tm_sec = 0;

    // ��������� ����� ����������� � ������� � ������ �����
    time_t notification_time_seconds = mktime(&notification_time);

    std::cout << "������� ����� �����������(English only): ";
    std::wstring notification_text;
    std::getline(std::wcin, notification_text);
    std::getline(std::wcin, notification_text);

    // ����������� ����, � ������� ������ ������� ���������, �� ��������� �� ����� �����������
    while (true) {
        // �������� ������� �����
        time_t current_time_seconds = time(nullptr);

        // ���������, �� ��������� �� ����� �����������
        if (current_time_seconds >= notification_time_seconds) {
            // ����� ����������� ���������, ������� ����������� ����
            MessageBox(nullptr, notification_text.c_str(), TEXT("�����������"), MB_OK);
            // ������� �� �����
            break;
        }

        // ������� 1 �������
        Sleep(1000);
    }
}
*/


#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

void module4() {
    SetConsoleCP(1251);
    int year, month, day, hour, minuts;
    setlocale(LC_CTYPE, "Russian_Russia.NULL");
    SYSTEMTIME st;
    GetLocalTime(&st);
    cout << st.wYear << " ";
    cout << st.wMonth << " ";
    cout << st.wDay << " ";
    cout << st.wHour << " ";
    cout << st.wMinute << endl;

    cout << "������� ��� ���������� ";
    cin >> year;
    if (year < st.wYear) {
        cout << "������� ���������� ����" << endl;
    }

    cout << "������� ���� ���������� ";
    cin >> month;
    if (month < st.wMonth) {
        cout << "������� ���������� ����" << endl;
    }

    cout << "������� ���� ���������� ";
    cin >> day;
    if (day < st.wDay) {
        cout << "������� ���������� ����" << endl;
    }

    cout << "������� ��� ���������� ";
    cin >> hour;
    if (hour < st.wHour) {
        cout << "������� ���������� ����" << endl;
    }

    cout << "������� ������ �� ���������� ";
    cin >> minuts;
    if (minuts < st.wMinute) {
        cout << "������� ���������� ����" << endl;
    }
    
    string not_text;
    cout << "������� ��������� �� ����������: ";
    cin.get();
    getline(cin, not_text);
    for (; ; ) {
        GetLocalTime(&st);

        if (year == st.wYear && month == st.wMonth && day == st.wDay && hour == st.wHour && minuts == st.wMinute) {
            MessageBoxA(NULL, not_text.c_str(), "OnTime", NULL);
            break;

        }
    }
}