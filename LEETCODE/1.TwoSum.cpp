#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& a, int target) {
            int n = a.size();
            for(int i = 0; i < n; i++)
            {
                for(int j = i + 1; j < n; j++)
                {
                    cout << "* ";
                    if(a[i] + a[j] == target)
                    {
                        return {i,j};
                    }
                }
                cout << endl;
            }
            cout << "not possible.";
            return {};
        }
    };

    int main()
    {
        Solution s;
        vector<int> a = {1,2,3,4};
        int t;
        cin >> t;
        vector<int> res = s.twoSum(a,t);
        cout << res[0] << " " << res[1];
        return 0;
    }