#include <stdio.h>

int main()
{
  char str[30];
	int N,K,i,j,t=0,c=0;
	scanf("%d %d",&N,&K);
	for(i=0;i<N;i++)
	{
       scanf("%s",str);
	}
   for(i=0;i<N;i++)
	{
	  t=0;
		for(j=0;str[j]!='\0';j++)
		{
			if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
			{
				t++;
			}
		}
		if(t==0)
		{
		break;
		}
		if(t>=1)
		{
		c++;
		}
	
	}
	if(c>=K)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
    return 0;
}
