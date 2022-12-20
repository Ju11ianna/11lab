#include <iostream>
#include <fstream> //дл€ раюоты с внешними файлами
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");

    string line;

    ifstream file("C:\\Users\\Lenovo\\Desktop\\трпо\\hello.txt"); // окрываем файл дл€ чтени€
    if (file.is_open())
    {
        while (getline(file, line))
        {
            cout << line << std::endl;
        }
    }
    file.close();     // закрываем файл

    ofstream fout;

    fout.open("C:\\Users\\Lenovo\\Desktop\\трпо\\hello.txt", ofstream::app);
    if (!fout.is_open()) {
        cout << "файл не открылс€:(" << endl;
    }
    else {
        string note;
        cout << "¬ведите вашу заметку: ";
        getline(cin, note);
        fout << "\n";
        for (int i = 0; i < note.length(); i++) {
            
            fout << note[i];
        }
        
    }
    int a;
    cout << "—оздать новую заметку?(1-да; 2-нет) ";
    cin >> a;
    cout << endl;
    switch (a) {//часть кода с кейзом не работает;))))
    case 1: {
        string note;
        cout << "¬ведите вашу заметку: ";
        getline(cin, note);
        fout << "\n";
        for (int i = 0; i < note.length(); i++) {

            fout << note[i];
        }
    }
        break;
    case 2:
        return 0;
        break;
    }
    cout << "End of program" << endl;
    return 0;
}