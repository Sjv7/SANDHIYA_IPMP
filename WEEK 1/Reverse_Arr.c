#include<stdio.h>
int main()
{
    int n,i,num;
    scanf("%d",&n);
    num=n;
    int arr[n];
    char str[n];

    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    // for(i=0;i<n;i++) scanf("%s",&str[i]); str[i]='\0';
    // scanf("%s",str);

    // for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    // for(i=0;i<n || str[i]!='\0';i++) printf("%c ",str[i]);
    // printf("%s ",str);

    for(i=0;i<num;i++,num--)
    {
        int temp=arr[i];
        arr[i]=arr[num-1];
        arr[num-1]=temp;
    }

    for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");

    return 0;
}