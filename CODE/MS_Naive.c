#include<stdio.h>
#include<stdlib.h>

int comp(const void* x, const void* y)
{
    return (*(int *)x - *(int *)y);
}
void mergeArrays(int* a, int n1, int* b, int n2,int *c, int n) {
    // code here
    int i=0,j=0,k=0;
    while(i<n1)
    {
        c[k++]=a[i++];
    }
    while(j<n2)
    {
        c[k++]=b[j++];
    }
    qsort(c,n,sizeof(int),comp);
    // qsort(c,n,sizeof(int),[](const void* a, const void* b) {
    //     return (*(int*)a - *(int*)b);
    // });
}
int main()
{
    int a[]={5,6,7};
    int b[]={1,2,8,7};
    int n1,n2,n,i;
    n1=sizeof(a)/sizeof(a[0]);
    n2=sizeof(b)/sizeof(b[0]);
    n=n1+n2;
    int c[n];
    
    mergeArrays(a,n1,b,n2,c,n);
    
    for(i=0;i<n;i++) printf("%d ",c[i]);
    
    return 0;
}