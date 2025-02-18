#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int sumOfGoodNumbers(vector<int>& a, int k) {
            int good = 0;
            int n = a.size();
            for(int i=0; i<n; i++)
                {
                    if((i-k) < 0)
                    {
                        if(i+k<n && a[i] > a[i+k]) {
                            good+=a[i];
                        cout << a[i] << " ";
                        }
                    }
                    else if((i+k) >= a.size())
                    {
                        if(i-k>=0 && a[i] > a[i-k]) {
                            good+=a[i];
                        cout << a[i] << " ";
                        }
                    }
                    else
                    {
                        if((i-k>=0 && i+k<n) && a[i]>a[i-k] && a[i]>a[i+k])
                        {
                            good+=a[i];
                            cout << a[i] << " ";
                        }
                    }
                }
            cout << good;
            return good;
        }
    };