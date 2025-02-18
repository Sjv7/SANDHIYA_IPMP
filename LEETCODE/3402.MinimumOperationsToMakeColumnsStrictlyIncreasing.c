#include<stdio.h>
int minimumOperations(int **a, int n, int *m) {
    int i,j;
    int c=0,tot=0;
    for(i=0;i<*m;i++)
    {
        for(j=1;j<n;j++)
        {
            c=0;
            if(a[j][i]<=a[j-1][i])
            // while( *(*(a+i)+j) <= *(*(a+i)+(j-1)))
            {
                c=a[j-1][i]-a[j][i]+1;
                a[j][i]+=c;
            }
            tot+=c;
        }
    }
    printf("%d ",tot);
    return tot;
}

int minimumOperationsErr(int **a, int n, int *m) {
    int i,j;
    int c=0,tot=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<*m;j++)
        {
            // while(a[j][i]!=a[j-1][i])
            while( *(*(a+i)+j) <= *(*(a+i)+(j-1)))
            {
                a[j][i]++;
                c++;
            }
            tot+=c;
        }
    }
    printf("%d ",tot);
    return tot;
}