#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber)
{
    string s;
    while (columnNumber > 0)
    {
        columnNumber--;
        int r = columnNumber % 26;
        s.push_back('A' + r);
        columnNumber /= 26;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    int columnNumber;
    cout << "Enter column number: ";
    cin >> columnNumber;

    string columnTitle = convertToTitle(columnNumber);
    cout << "Excel column title: " << columnTitle << endl;

    return 0;
}
