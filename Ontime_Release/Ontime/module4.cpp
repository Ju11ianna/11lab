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

int year, month, day, hour, minuts;

void module4() {
    setlocale(LC_CTYPE, "Russian");
    SYSTEMTIME st;
    GetLocalTime(&st);
    std::wstring not_text;
    cout << "������� ��������� ��� ����������� ";
    std::getline(std::wcin, not_text);
    cout << st.wYear << " ";
    cout << st.wMonth << " ";
    cout << st.wDay << " ";
    cout << st.wHour << " ";
    cout << st.wMinute << endl;
    
    cout << "������� ��� ����������� ";
    cin >> year;

    cout << "������� ����� ����������� ";
    cin >> month;

    cout << "������� ���� ����������� ";
    cin >> day;

    cout << "������� ��� ����������� ";
    cin >> hour;

    cout << "������� ������ ��� ����������� ";
    cin >> minuts;


    for (; ; ) {
        GetLocalTime(&st);

        if (year == st.wYear && month == st.wMonth && day == st.wDay && hour == st.wHour && minuts == st.wMinute) {
            MessageBox(NULL, not_text.c_str(), L"OnTime", NULL);
            break;
        }
    }
}