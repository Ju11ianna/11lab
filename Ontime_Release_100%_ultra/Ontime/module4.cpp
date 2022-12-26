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

    cout << "¬ведите год напоминани¤ ";
    cin >> year;
    if (year < st.wYear) {
        cout << "¬ведите правильную дату" << endl;
    }

    cout << "¬ведите мес¤ц напоминани¤ ";
    cin >> month;
    if (month < st.wMonth) {
        cout << "¬ведите правильную дату" << endl;
    }

    cout << "¬ведите день напоминани¤ ";
    cin >> day;
    if (day < st.wDay) {
        cout << "¬ведите правильную дату" << endl;
    }

    cout << "¬ведите час напоминани¤ ";
    cin >> hour;
    if (hour < st.wHour) {
        cout << "¬ведите правильную дату" << endl;
    }

    cout << "¬ведите минуты дл¤ напоминани¤ ";
    cin >> minuts;
    if (minuts < st.wMinute) {
        cout << "¬ведите правильную дату" << endl;
    }
    
    string not_text;
    cout << "¬ведите сообщение дл¤ напоминани¤: ";
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