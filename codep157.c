#include <stdio.h>

int main()
{
     int N1,N2,d,r,bin=0,t=1,x,k=0,j,arr[1000];
    scanf("%d %d",&N1,&N2);
    d=N1*N2;
    while(d)
    {
        
        r=d%2;
    d=d/2;
     bin=bin+(r*t);
     t=t*10;
        
    }
     while(bin>0)
    {
          r=bin%10;
        bin=bin/10;
           
       
          arr[k]=r;
        
         k++;  
        
    }
    
    
    for(j=0;j<k;j++)
    {
         if(arr[j]==1)
        { 
            x=j;
            break;
            
            
        }
        
    }
   printf("%d",x+1);
    return 0;
}
