#include<stdio.h>
#include<stdlib.h>
int minimumOperations(int **a, int n, int *m) {
    int i,j;
    int c=0,tot=0;
    for(i=0;i<*m;i++)
    {
        for(j=1;j<n;j++)
        {
            c=0;
            if(a[j][i]<=a[j-1][i])
            // if( *(*(a+i)+j) <= *(*(a+i)+(j-1)))
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
int minimumOperations1(int **a, int n, int *m) {
    int i,j;
    int c=0,tot=0;
    for(i=0;i<*m;i++)
    {
        
        for(j=1;j<n;j++)
        {
            c=0;
            while(a[j][i]<=a[j-1][i])
            // while( *(*(a+i)+j) <= *(*(a+i)+(j-1)))
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
int main()
{
    int n=4,m=2,tot;
    int i;
    int **a=(int **)malloc(n*sizeof(int *));
    for(i=0;i<n;i++) a[i]=(int *)malloc(m*sizeof(int));
    // a[4][2]={{3,2},{1,3},{3,4},{0,1}};
    a[0][0] = 3; a[0][1] = 2;
    a[1][0] = 1; a[1][1] = 3;
    a[2][0] = 3; a[2][1] = 4;
    a[3][0] = 0; a[3][1] = 1;
    tot=minimumOperations1(a,n,&m);
    // tot=minimumOperations(a,n,&m);

    printf("%d ",tot);

    for(i=0;i<n;i++)
    free(a[i]);
    free(a);

    return 0;
}