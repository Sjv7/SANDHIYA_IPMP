#include <iostream>
using namespace std;

int titleToNumber(string columnTitle)
{
    int result = 0;
    for (char c : columnTitle)
    {
        result = result * 26 + (c - 'A' + 1);
    }
    return result;
}

int main()
{
    string columnTitle;
    cout << "Enter Excel column title (A - FXSHRXW): ";
    cin >> columnTitle;

    int columnNumber = titleToNumber(columnTitle);
    cout << "Column number: " << columnNumber << endl;

    return 0;
}