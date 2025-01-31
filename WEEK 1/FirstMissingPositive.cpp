#include<iostream>
using namespace std;
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int FirstMissingPositive(int A[], int n) {
    int i=0;
    for(i=0;i<n;i++)
    {
        while(A[i]>0 && A[i]<=n && A[A[i]-1]!=A[i])
        {
            swap(&A[i],&A[A[i]-1]);
            // int temp=A[i];
            // A[i]=A[A[i]-1];
            // A[A[i]-1]=temp;
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(A[i]!=i+1)
        {
            return i+1;
        }
    }
    return n+1;
}
int FirstMissingPositive2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            swap(&arr[i], &arr[arr[i] - 1]);
            // int temp=arr[i];
            // arr[i]=arr[arr[i]-1];
            // arr[arr[i]-1]=temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            return i + 1;
        }
    }
    return n + 1;
}

int FirstMissingPositive3(int a[], int n)
{
    int i, sum=0;
    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }
    int expected = ((a[n-1])*(a[n-1]+1))/2;
    cout << sum << " " << expected << endl;
    if(expected == sum) return a[n-1]+1;
    return expected - sum;
}
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    // cout << FirstMissingPositive(a,n) << endl;
    cout << FirstMissingPositive3(a,n) << endl;

    return 0;
}