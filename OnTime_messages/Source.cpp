#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

int year, month, day, hour, minuts;

int main() {
	SetConsoleCP(1251);
	setlocale(LC_CTYPE, "Russian");
	SYSTEMTIME st;
	GetLocalTime(&st);
	cout << st.wYear << " ";
	cout << st.wMonth << " ";
	cout << st.wDay << " ";
	cout << st.wHour << " ";
	cout << st.wMinute<< endl;

	cout << "¬ведите сообщение дл€ напоминани€ ";
	std::wstring not_text;
	std::getline(std::wcin, not_text);
	cout << "¬ведите год напоминани€ ";
	cin >> year;

	cout << "¬ведите мес€ц напоминани€ ";
	cin >> month;

	cout << "¬ведите день напоминани€ ";
	cin >> day;

	cout << "¬ведите час напоминани€ ";
	cin >> hour;

	cout << "¬ведите минуты дл€ напоминани€ ";
	cin >> minuts;


	for (; ; ) {
		GetLocalTime(&st);

		if (year == st.wYear && month == st.wMonth && day == st.wDay && hour == st.wHour && minuts == st.wMinute) {
			MessageBox(NULL, not_text.c_str(), L"OnTime", NULL);
			break;
		}
	}
	return 0;
}