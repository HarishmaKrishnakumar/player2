#include <stdio.h>

int main()
{
     int a,b,fact=1,gcd,i;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    a=fact;
    fact=1;
    for(i=1;i<=b;i++)
    {
        fact=fact*i;
    }
    b=fact;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
        
   return 0;
}
