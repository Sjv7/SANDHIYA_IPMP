#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int Ones(int x)
        {
            int count = 0;
            while(x > 0)
            {
                x = x & (x-1);
                count++;
            }
            cout << "count: " << count << endl;
            return count;
        }
        vector<int> countBits(int n) {
            int i;
            vector<int> res(n+1);
            for(i=1; i<=n; i++)
            {
                res[i] = Ones(i);
            }
            for(int i=0; i<=n; i++)
            cout << res[i] << " ";
    
            return res;
        }
    };

    
class Solution1 {
    public:
        int Ones(int x)
        {
            int count = 0;
            while(x > 0)
            {
                x = x & (x-1);
                count++;
            }
            cout << "count: " << count << endl;
            return count;
        }
        vector<int> countBits(int n) {
            int i;
            vector<int> res(n+1);
            for(i=1; i<=n; i++)
            {
                res[i] = Ones(i);
            }
            for(int i=0; i<=n; i++)
            cout << res[i] << " ";
    
            return res;
        }
    };