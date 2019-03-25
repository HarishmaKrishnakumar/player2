#include <stdio.h>

int main()
{
     int a[100],N,i,K,f=0,b;
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
       
            if(a[i]==K)
            {
                f=1;
            }
        
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
        
   return 0;
}
