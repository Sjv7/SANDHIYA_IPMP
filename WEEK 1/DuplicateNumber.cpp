#include<bits/stdc++.h>
using namespace std;
int findDuplicateNum(vector<int>& Arr)
{       
        int slow = Arr[0];
        int fast = Arr[0];
        do {
            slow = Arr[slow];
            fast = Arr[Arr[fast]];
        }while(slow != fast);
        
        fast = Arr[0];
        while(slow != fast) {
            slow = Arr[slow];
            fast = Arr[fast];
        }
        return fast;
}
int main()
{
    vector<int> nums = {1,3,4,2,2};
    cout << "Duplicate No: " << findDuplicateNum(nums) << "\n";
    return 0;
}