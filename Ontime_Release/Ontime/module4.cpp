/*#include <iostream>
#include <ctime>
#include <Windows.h>
#include <string>

void module4() {
    setlocale(LC_ALL, "rus");
    std::cout << "Введите дату и время уведомления (число месяц год час минута): ";

    // Считываем дату и время уведомления
    int day, month, year, hour, minute;
    std::cin >> day >> month >> year >> hour >> minute;

    // Создаем структуру tm для хранения даты и времени
    tm notification_time;
    notification_time.tm_year = year - 1900; // Годы нумеруются с 1900
    notification_time.tm_mon = month - 1; // Месяцы нумеруются с 0
    notification_time.tm_mday = day;
    notification_time.tm_hour = hour;
    notification_time.tm_min = minute;
    notification_time.tm_sec = 0;

    // Переводим время уведомления в секунды с начала эпохи
    time_t notification_time_seconds = mktime(&notification_time);

    std::cout << "Введите текст уведомления(English only): ";
    std::wstring notification_text;
    std::getline(std::wcin, notification_text);
    std::getline(std::wcin, notification_text);

    // Бесконечный цикл, в котором каждую секунду проверяем, не наступило ли время уведомления
    while (true) {
        // Получаем текущее время
        time_t current_time_seconds = time(nullptr);

        // Проверяем, не наступило ли время уведомления
        if (current_time_seconds >= notification_time_seconds) {
            // Время уведомления наступило, создаем всплывающее окно
            MessageBox(nullptr, notification_text.c_str(), TEXT("Уведомление"), MB_OK);
            // Выходим из цикла
            break;
        }

        // Ожидаем 1 секунду
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
    cout << "Введите сообщение для напоминания ";
    std::getline(std::wcin, not_text);
    cout << st.wYear << " ";
    cout << st.wMonth << " ";
    cout << st.wDay << " ";
    cout << st.wHour << " ";
    cout << st.wMinute << endl;
    
    cout << "Введите год напоминания ";
    cin >> year;

    cout << "Введите месяц напоминания ";
    cin >> month;

    cout << "Введите день напоминания ";
    cin >> day;

    cout << "Введите час напоминания ";
    cin >> hour;

    cout << "Введите минуты для напоминания ";
    cin >> minuts;


    for (; ; ) {
        GetLocalTime(&st);

        if (year == st.wYear && month == st.wMonth && day == st.wDay && hour == st.wHour && minuts == st.wMinute) {
            MessageBox(NULL, not_text.c_str(), L"OnTime", NULL);
            break;
        }
    }
}