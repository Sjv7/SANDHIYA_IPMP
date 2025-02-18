#include<stdio.h>
countSubarrays(int* nums, int numsSize) {
    int i,j,k; 
    int count=0;
    for(i=0;i<numsSize-2;i++)
    {
        if((nums[i]+nums[i+2])*2==nums[i+1])
            count++;
    }
    return count;
}
