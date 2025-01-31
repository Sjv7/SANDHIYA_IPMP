#include <iostream>
#include <vector>

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
vector<int> findDuplicateAndMissing(vector<int>& nums)
{
    int n=nums.size();
    long long int sumN= (long long)(n)*(n+1)/2;
    long long int sumSq= (long long)n*(n+1)*((2*n)+1)/6;
    long long sumA=0,sumASq=0;
    for (int num: nums)
    {
        sumA+=num;
        sumASq+=(long long)(num)*(num);
    }
    long long diffN=sumN - sumA;
    long long diffSq=sumSq - sumASq;
    // (b^2-a^2)=(b+a)(b-a)
    long long sum=diffSq/diffN;
    // b+a-(b-a)= a
    int A= (sum - diffN)/2;
    int B= (sum + diffN)/2;
    return {A,B};
}

int main()
{
    vector<int> nums = {1,2,4,5,4};
    vector<int> result = findDuplicateAndMissing(nums);
    cout << "Duplicate No: " << findDuplicateNum(nums) << "\n";
    
    cout << "Duplicate: " << result[0] << " Missing: " << result[1] << endl;
    
    return 0;
}