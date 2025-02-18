#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string findValidPair(string s) {
            int j,i;
            string res="";
            int n=s.size();
            for(i=0; i<n-1; i++)
            {
                if(s[i] != s[i+1])
                {
                int cnt1 = 0, cnt2 = 0;
                    for(j=0; j<n; j++)
                    {
                        if(s[j] == s[i])
                            cnt1++;
                        if(s[j] == s[i+1])
                            cnt2++;
                    }
                    int c1 = s[i] - '0';
                    int c2 = s[i+1] - '0';
                    if((c1 == cnt1) && (c2 == cnt2))
                    {
                        if(res.empty())
                        {
                            return string(1,s[i]) + string(1,s[i+1]);
                        }
                    }
                }
            }
            cout << res << endl;
            return "";
        }
    };