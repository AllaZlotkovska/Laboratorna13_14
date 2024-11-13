#include <iostream>
#include "Windows.h"
#include <list>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    list<int> myList = { 10, 9, 35, 44, 57, 9, 85 };
    cout << "\nПочатковий спосок:";
    for (int x : myList)
    {
        cout << x << " ";
    }

    cout << "\nНовий список:";
    // Вставити число 11 після кожного елемента, рівного 9
    for (auto it = myList.begin(); it != myList.end(); ++it)
    {
        if (*it == 9)
        {
            it = myList.insert(++it, 11);
        }
    }


    for (int x : myList)
    {
        cout << x << " ";
    }
    return 0;

}
