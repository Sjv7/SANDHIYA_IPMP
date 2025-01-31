#include<bits/stdc++.h> 
using namespace std; 
struct Pair 
{ 
    int min; 
    int max; 
};
struct Pair getMinMax(int arr[], int n) 
{ 
    struct Pair minmax;     
    int i; 
    if (n % 2 == 0) 
    { 
        if (arr[0] > arr[1])     
        { 
            minmax.max = arr[0]; 
            minmax.min = arr[1]; 
        } 
        else
        { 
            minmax.min = arr[0]; 
            minmax.max = arr[1]; 
        } 
        i = 2; 
    }
    else
    { 
        minmax.min = arr[0]; 
        minmax.max = arr[0]; 
        
        i = 1; 
    }
    while (i < n - 1) 
    {         
        if (arr[i] > arr[i + 1])         
        { 
            if(arr[i] > minmax.max)     
                minmax.max = arr[i]; 
                
            if(arr[i + 1] < minmax.min)         
                minmax.min = arr[i + 1];     
        } 
        else        
        { 
            if (arr[i + 1] > minmax.max)     
                minmax.max = arr[i + 1]; 
                
            if (arr[i] < minmax.min)         
                minmax.min = arr[i];     
        }
        i += 2; 
    }         
    return minmax; 
}
int res[2];
void LinearMaxMin(int a[], int n)
{
    int i,min,max;
    min=a[0],max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<=min)   min=a[i];
        if(a[i]>max)    max=a[i];
    }
    res[0]=min, res[1]=max;
    // return res;
}
int main() 
{ 
    int arr[] = { 6, 7, 9, 10, 1, 100 }; 
    int n = 6; 
    
    Pair minmax = getMinMax(arr, n); 
    
    cout << "Minimum: " << minmax.min << endl; 
    cout << "Maximum: "<< minmax.max << endl; 
    // int *r = new int[2];
    LinearMaxMin(arr, n);
    cout << "Linear Method: " "\n" << "Min: " << *(res) << " Max: " << *(res+1);

    return 0; 
} 