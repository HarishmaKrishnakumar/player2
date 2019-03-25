#include <stdio.h>

int main()
{
   int N,K,i,t1,t2,j;
  scanf("%d %d",&N,&K);
  int a[1000];
	for(i=0;i<N;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<K;i++)
	{
		for(j=i+1;j<K;j++)
		{
		if(a[i]>a[j])
		{
			t1=a[i];
			a[i]=a[j];
			a[j]=t1;
		}
		}
	}
	for(i=0;i<K;i++)
	{
	printf("%d ",a[i]);
	}

	for(i=K;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
		if(a[i]<a[j])
		{
			t2=a[i];
			a[i]=a[j];
			a[j]=t2;
		}
		}
	}
	for(i=K;i<N;i++)
	{
	printf("%d ",a[i]);
	}
    return 0;
}
