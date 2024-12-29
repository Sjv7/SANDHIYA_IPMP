#include<stdio.h>
#include<stdbool.h>

bool Check(float x1,float y1,float x2,float y2,float x3,float y3)
{
    if(x1==x2)
    {
        if(x1==x3) return true; //Points lie on the same line
        if(x1!=x3) return false;
    }
    // if(y1==y2)
    // {
    //     if(y1==y3) return true;
    //     if(y1!=y3) return false;
    // }
    else
    {
        // if(x1!=x3 || y1!=y3)
        if(x1!=x3)
        {
            float m1=(y1-y2)/(x1-x2);
            float m2=(y1-y3)/(x1-x3);
            if(m1==m2) return true;
            if(m1!=m2) return false;
        }
    }
}

int main()
{
    int N;
    scanf("%d",&N);
    float X[N],Y[N];
    int i,j,k;
    for(i=0;i<N;i++)
    {
            scanf("%d %d",&X[i],&Y[i]);
    }
    //there will be nC3 Combinations
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            for(k=j+1;k<N;k++)
            {
                if(Check(X[i],Y[i],X[j],Y[j],X[k],Y[k])) printf("Yes");
                else printf("No");
            }
        }
    }
    return 0;
}