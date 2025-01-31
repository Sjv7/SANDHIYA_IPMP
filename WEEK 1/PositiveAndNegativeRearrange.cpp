#include <vector>
#include <iostream>
using namespace std;

void PositiveNegative(vector<int> &a)
{
    int n = a.size();
    vector<int> pos, neg;

    for (int x : a)
    {
        if (x >= 0)
            pos.push_back(x);
        else
            neg.push_back(x);
    }

    int i = 0, j = 0, k = 0;
    while (i < pos.size() && j < neg.size())
    {
        a[k++] = pos[i++];
        a[k++] = neg[j++];
    }

    while (i < pos.size())
        a[k++] = pos[i++];
    while (j < neg.size())
        a[k++] = neg[j++];
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    PositiveNegative(a);
    for (int x : a)
        cout << x << " ";
    return 0;
}