#include <bits/stdc++.h>
using namespace std;

void segregate(vector<int> &arr)
{
    int n = arr.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] % 2 == 0)
            i++;
        else if (arr[j] % 2 != 0)
            j--;
        else
            swap(arr[i], arr[j]);
    }
}
int main()
{
    vector<int> arr = {4, 6, 3, 7, 0, 45, 23, 12, 56, 89, 2};

    int n = arr.size();
    int pos = 0, i = 0;

    while (i < n)
    {
        if (i < n - 1 && arr[pos] % 2 == 0)
        {
            pos++;
            i++;
        }
        else
        {
            while (i < n - 1 && arr[i] % 2 != 0)
            {
                i++;
            }
            swap(arr[i], arr[pos]);
            // int t = arr[i];
            // arr[i] = arr[pos];
            // arr[pos] = t;
            pos++;
            i++;
        }
    }

    cout << "Array after segregation: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl
         << endl;
    int n1;
    cout << "Enter n: ";
    cin >> n1;
    vector<int> a(n1);
    cout << "Enter elements: ";
    for (int &x : a)
        cin >> x;
    segregate(a);
    for (int x : a)
        cout << x << " ";
    return 0;
}