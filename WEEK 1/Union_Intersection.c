#include<stdio.h>
#include<stdlib.h>
int comp(const void* x, const void* y)
{
    return (*(int *)x - *(int *)y);
}
void MergeTwo(int* arr1,int n1,int* arr2,int n2,int* arr3)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else
            arr3[k++]=arr2[j++];
    }
    while(i<n1)
        arr3[k++]=arr1[i++];
    while(j<n2)
        arr3[k++]=arr2[j++];
}
int* Union(int* a,int n1,int* b, int n2,int *n)
{
    int *U=(int *)malloc((n1+n2)*sizeof(int));
    int k=0;

    for(int i=0;i<n1;i++)
    {
        int j;
        for(j=0;j<k;j++)
        {
            if(U[j]==a[i])
            break;
        }
        if(j==k)
            U[k++]=a[i];
    }
    for(int i=0;i<n2;i++)
    {
        int j;
        for(j=0;j<k;j++)
        {
            if(U[j]==b[i])
            break;
        }
        if(j==k)
            U[k++]=b[i];
    }
    qsort(U,k,sizeof(int),comp);
    *n=k;

    return U;
}
int* MergeUnion(int a[],int n1,int b[], int n2,int *n)
{
    int i=0,j=0,index=0;
    int *U=(int *)malloc((n1+n2)*sizeof(int));
    while(i<n1 && j<n2)
    {
        if(i>0 && a[i-1]==a[i])
        {
            i++;
            continue;
        }
        if(j>0 && b[j-1]==b[j])
        {
            j++;
            continue;
        }
        if(a[i] < b[j])
        {
            U[index++]=a[i];
            i++;
        }
        else if(a[i] > b[j])
        {
            U[index++]=b[j];
            j++;
        }
        else
        {
            U[index++]=a[i];
            i++;
            j++;
        }
    }
    while(i < n1)
    {
        if(i>0 && a[i-1]==a[i])
        {
            i++;
            continue;
        }
        U[index++]=a[i];
        i++;
    }
    while(j < n2)
    {
        if(j>0 && a[j-1]==a[j])
        {
            j++;
            continue;
        }
        U[index++]=a[j];
        j++;
    }
    *n=index;
    return U;
}
int* Intersection(int a[],int n1,int b[], int n2,int *n)
{
    int min=(n1<=n2)?n1:n2;
    int *Inter=(int *)malloc(min*sizeof(int));
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            int found=0;
            if(a[i]==b[j])
            {
                for(int k=0;k<*n;k++)
                {
                    if(Inter[k]==a[i])
                    {
                        found=1;
                        break;
                    }
                }
                if(!found)
                {
                    Inter[(*n)++]=a[i];
                }
            }
        }
    }
    return Inter;
}
int* Inter_Bet(int a[],int n1,int b[], int n2,int *n)
{
    int min=(n1<=n2)?n1:n2;
    int *I=(int *)malloc(min*sizeof(int));
    int i,j,k;
    for(i=0;i<n1;i++)
    {
        if(a[i-1]==a[i])
        continue;

        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                I[(*n)++]=a[i];
                break;
            }
        }
    }
    return I;
}
int* MergeInter(int a[],int n1,int b[], int n2,int *n)
{
    int i=0,j=0;
    int min=(n1<=n2)?n1:n2;
    int *I=(int *)malloc(min*sizeof(int));
    while(i<n1 && j<n2)
    {
        if(a[i-1]==a[i])
        continue;

        if(a[i] < b[j])
            i++;
        else if(a[i] > b[j])
            j++;
        else
        {
            I[(*n)++]=a[i];
            i++;
            j++;
        }
    }
    return I;
}
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={2,2,4,5};
    int n1,n2,n,n_inter,i;
    n1=sizeof(a)/sizeof(a[0]);
    n2=sizeof(b)/sizeof(b[0]);
    n=n1+n2;
    
    // MergeTwo(a,n1,b,n2,c);
    // int *c=Union(a,n1,b,n2,&n);
    int *U=MergeUnion(a,n1,b,n2,&n);
    n_inter=0;
    // int *I=Intersection(a,n1,b,n2,&n_inter);
    // int *I=Inter_Bet(a,n1,b,n2,&n_inter);
    int *I=MergeInter(a,n1,b,n2,&n_inter);
    

    for(i=0;i<n1;i++) printf("%d ",a[i]); printf("\n");
    for(i=0;i<n2;i++) printf("%d ",b[i]); printf("\n");
    printf("Union: ");
    for(i=0;i<n;i++) printf("%d ",U[i]); printf("\n");
    printf("Intersection: ");
    for(i=0;i<n_inter;i++) printf("%d ",I[i]);

    free(U);
    free(I);
    return 0;
}