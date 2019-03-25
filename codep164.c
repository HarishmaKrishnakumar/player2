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
           printf("%d",a[i]);
           f=1;
           break;
        }
        else
        {
            if(a[i]<K)
            {
                b=a[i];
                f=0;
            }
        }
    }
    if(f==0)
    {
        printf("%d",b);
    }
        
   return 0;
}
