#include <stdio.h>

int main()
{
    int N1,N2,xor,bin=0,r,p=1,c=0;
   scanf("%d %d",&N1,&N2);
   xor=N1^N2;
   while(xor>0)
   {
       r=xor%2;
       bin=bin+r*p;
      xor=xor/2;
       p=p*10;
   }
   while(bin>0)
   {
       r=bin%10;
       if(r==1)
       {
           c++;
       }
       bin=bin/10;
   }
   printf("%d",c); return 0;
}
