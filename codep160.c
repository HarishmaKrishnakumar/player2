#include <stdio.h>

int main()
{
     int N1,N2,c=0,d,r,bin=0,t=1;
    scanf("%d %d",&N1,&N2);
    d=N1|N2;
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
           
        if(r==1)
        {  c++;
            
        }
    }
   printf("%d",c);

   return 0;
}
