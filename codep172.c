#include <stdio.h>

int main()
{
    int N,i,j,k=0,t;
    scanf("%d",&N);
    int arr[N];
    while(N>0)
    {
        arr[k]=N%10;
        N=N/10;
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(arr[i]<arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
        printf("%d",arr[i]);
    }
    return 0;
}
