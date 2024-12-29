#include<stdio.h>
int main()
{
    printf("\nKitchen Management\n\n");
    int N;
    scanf("%d",&N);

    int Q[N],A[N],B[N];
    int i,j;

    for(i=0;i<N;i++) scanf("%d",&Q[i]);
    for(i=0;i<N;i++) scanf("%d",&A[i]);
    for(i=0;i<N;i++) scanf("%d",&B[i]);

    int maxA=Q[0]/A[0],maxB=Q[0]/B[0],maxTotal=0;

    for(i=0;i<N;i++)
    {
        int t;
        if(A[i]>0) t=Q[i]/A[i];
        if(t < maxA) maxA=t;
    }
    // printf("%d %d %d \n",maxA,maxB,maxTotal);

    for(int countA=0;countA<=maxA;countA++)
    {
        int Q1[N]; //Remaining Quantity after spending for A
        for(i=0;i<N;i++)
        {
            Q1[i]=Q[i]-(countA*A[i]); //printf(" Q1[i] %d ",Q1[i]);
        }

        for(i=0;i<N;i++)
        {
            int t;
            if(B[i]>0) t=Q1[i]/B[i];
            if(t < maxB) maxB=t;
        }

        // if(maxB < 0) continue;
        int T=countA+maxB;
        if(T > maxTotal) maxTotal=T;
    }
    
    printf("%d",maxTotal);
    
    return 0;
}