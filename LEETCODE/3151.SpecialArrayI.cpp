#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool isArraySpecial(vector<int>& a)
        {
            int n = a.size();
            for(int i = 0; i < n - 1; i++)
            {
                // int prev_parity = 0;
                // if(a[i] % 2 == 0)
                int p1 = a[i] % 2;
                int p2 = a[i+1] % 2;
                if(p1 == p2)
                    return false;
            }
            return true;
        }
    };