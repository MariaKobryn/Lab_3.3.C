#include <iostream>
#include <Windows.h> 
#include "LongLong.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    LongLong A;
    LongLong B;

    cout << " ������ A �����: " << endl;
    cin >> A;
    cout << " ʳ������ �������� ����� LongLong: " << Object::Count() << endl;
    cout << " ������ B �����: " << endl;
    cin >> B;
    cout << " ʳ������ �������� ����� LongLong: " << Object::Count() << endl;
    cout << " A + B: " << endl;
    cout << A + B << endl;
    cout << " ʳ������ �������� ����� LongLong: " << Object::Count() << endl;

    cout << " A * B:" << endl;
    cout << A * B << endl;
    cout << " ʳ������ �������� ����� LongLong: " << Object::Count() << endl;

    cout << " A > B " << endl;
    if (A > B) cout << " Yes " << endl; else cout << " No " << endl;

    cout << " A < B " << endl;
    if (A < B) cout << " Yes " << endl; else cout << " No " << endl;

    cout << " A == B " << endl;
    if (A == B) cout << " Yes " << endl; else cout << " No " << endl;
}
