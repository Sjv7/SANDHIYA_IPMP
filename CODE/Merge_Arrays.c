#include<stdio.h>
int main()
{
    int n,m,both,i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n];
    int b[m];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    both=m+n;
    int merge[both];
    for(i=0;i<both;i++)
    {
        if(i>=0 && i<n)
        merge[i]=a[i];
        merge[n+i]=b[i];
    }
    // for(i=0;i<n;i++) printf("%d ",a[i]); printf("\n");
    // for(i=0;i<m;i++) printf("%d ",b[i]); printf("\n");
    for(i=0;i<both;i++) printf("%d ",merge[i]);
    return 0;
}