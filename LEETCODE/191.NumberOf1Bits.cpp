#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int hammingWeight(int n)
        {
            vector<int> res;
            int i, Size, count = 0;
            int x = n;
            i=0;
            while(x > 0)
            {
                res.push_back(x%2);
                x/=2;
                i++;
            }
            Size = res.size();
            for(i=Size-1; i>=0; i--) cout << res[i] << " ";
            cout << "\n";
    
            for(i=0; i<Size; i++)
            {
                if(res[i]==1) count++;
            }
            cout << count;
            return count;
        }
    };