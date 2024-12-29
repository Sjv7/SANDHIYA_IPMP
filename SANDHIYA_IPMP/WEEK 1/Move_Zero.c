#include<stdio.h>
void moveZeroes(int* nums, int numsSize) {
    int i,pos=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            nums[pos]=nums[i];
            pos++;
        }
    }
    while(pos < numsSize)
    {
        nums[pos]=0;
        pos++;
    }
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int nums[n];
    for(i=0;i<n;i++) scanf("%d",&nums[i]);
    moveZeroes(nums,n);
    for(i=0;i<n;i++) printf("%d ",nums[i]);

    return 0;
}
