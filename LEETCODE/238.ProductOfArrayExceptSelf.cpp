#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& a) {
        int i,j, n = a.size();
        vector<int> res(n,1);
        int left=1, right=1;
        for(i=0; i<n; i++)
        {
            res[i]=left;
            left*=a[i];
        }
        for(i=n-1; i>=0; i--)
        {
            res[i]*=right;
            right*=a[i];
        }
        for(i=0; i<n; i++) cout << res[i] << " ";
            return res;
        }
    };