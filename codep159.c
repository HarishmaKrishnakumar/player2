#include <stdio.h>

int main()
{
     int N1,N2,c,d=0,r,bin=0,t=1;
    scanf("%d %d",&N1,&N2);
    c=N1*N2;
    while(c)
    {
    r=c%2;
    c=c/2;
     bin=bin+(r*t);
     t=t*10;
}
    
    while(bin>0)
    {
          r=bin%10;
        bin=bin/10;
           
        if(r==1)
        {  d++;
            
        }
    }
   printf("%d",d);

   return 0;
}
