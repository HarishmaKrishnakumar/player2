#include <stdio.h>

int main()
{
    int N,d=0,b=1,r,t=2;
    scanf("%d",&N);
    while(N)
    {
        r=N%10;
        d=d+r*b;
        N=N/10;
        b=b*2;
    }
    while(d>t)
    {
        t=t*2;
    }
    if(d<t)
    {
        printf("%d",t);
    }
   return 0;
}
