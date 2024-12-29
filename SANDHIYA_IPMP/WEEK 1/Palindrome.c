#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(long int x) {
    long int n=x,r=0,rev=0;
    long prev=0;
    if(x<0) return false;
    while(n!=0)
    {
        r=n%10;
         printf("R %d ",r);
        rev=r+(10*rev);
        // if((rev-r)/10 != prev)
        // return false;
        // prev=rev;
        printf(" %d \n",rev);
        n=n/10;
    }
    printf("REV: %d\n",rev);
    if (rev==x)
    {
        return true;
    }
    return false;
}
int main()
{
    long int num;
    num=1234554321;
    bool a;
    a=isPalindrome(num);
    printf(" %d ",a);
    return 0;
}