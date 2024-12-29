#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(long int x) {
    long int n=x,r=0,rev=0;
    if(x<0) return false;
    while(n!=0)
    {
        r=n%10;
        rev=r+(10*rev);
        n=n/10;
    }
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
    if(a) printf("True");
    else printf("False");
    return 0;
}
