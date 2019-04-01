#include <stdio.h>

int main()
{
 int N,a1[1000],a[1000],b[1000],i,j,c=0;
 scanf("%d",&N);
 
 for(i=0;i<N;i++)
 {
     scanf("%d",&a[i]);
 }
 
 for(i=0;i<N;i++)
 {
     scanf("%d",&a1[i]);
 }
 j=0;
 for(i=N-1;i>=0;i--)
 {
     b[j]=a1[i];
     j++;
 }
 
 for(i=0;i<N;i++)
 {
     if(a[i]==b[i])
     {
         c++;
     }
 }
 
 if(c==N)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
    return 0;
}
