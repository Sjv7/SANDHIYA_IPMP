#include<bits/stdc++.h>
using namespace std;

int GetOdd(int a[],int n)
{
    int i,j,count;
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count%2 != 0)
        return a[i];
    }
    return -1;
}
int GetOddOpt(int a[],int n)
{
    //using XOR Operation ^
    int i,res=0;
    for(i=0;i<n;i++)
        res=res^a[i];

    return res;
}
int main()
    {
        // int a[] = { 2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2, 5, 6}; //6
        int a[] = { 2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2 };
        int n=sizeof(a)/sizeof(a[0]);
        cout << GetOdd(a, n);
        // cout << GetOddOpt(a, n);

        return 0;
    }