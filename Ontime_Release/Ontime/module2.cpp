// ���� 36

# include <iostream>
# include <string>
# include <windows.h>

using namespace std;

void module2()
{
    string file = "file:///C:/Users/yanke/OneDrive/Desktop/12/index.html"; // ���� � �����
    ShellExecuteA(NULL, "open", file.c_str(), NULL, NULL, SW_SHOWDEFAULT);

}