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

	cout << "������� ��������� ��� ����������� ";
	std::wstring not_text;
	std::getline(std::wcin, not_text);
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
	return 0;
}