#include <iostream>
#include <vector>
using namespace std;

int MissingNumber(vector<int> &a)
{
    int i;
    int n = a.size() + 1;
    vector<int> hash(n + 1, 0);

    for (i = 0; i < n - 1; i++)
    {
        hash[(a[i])]++;
    }

    for (i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
            return i;
    }
    return -1;
}

int MissingNumber2(vector<int> &arr)
{

    int n = arr.size() + 1;

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    int expectedSum = (n * (n + 1)) / 2;

    return expectedSum - sum;
}

int MissingNumber3(vector<int> &arr)
{
    int n = arr.size() + 1;
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        xor2 ^= arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        xor1 ^= i;
    }

    // Missing number is the XOR of xor1 and xor2
    return xor1 ^ xor2;
}

int main()
{
    vector<int> a = {1, 2, 4, 5, 7};
    cout << MissingNumber(a) << endl;
    cout << MissingNumber2(a) << endl;
    cout << MissingNumber3(a) << endl;

    return 0;
}