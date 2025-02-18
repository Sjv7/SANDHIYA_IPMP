#include<stdio.h>

int countSubarrays(int* nums, int numsSize) {
    int i,j,k; 
    int count=0;
    for(i=0;i<numsSize-2;i++)
    {
        if((nums[i]+nums[i+2])*2==nums[i+1])
            count++;
    }
    return count;
}
int main()
{
    //COUNT SUBARRAYS OF 3 WITH A CONDITON
    int i,n,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    count=countSubarrays(a,n);
    printf("%d ",count);

    return 0;
}