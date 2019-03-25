#include <stdio.h>

int main()
{
  char str[1000];
	int i,l,f=0;
scanf("%s",str);
	l=strlen(str);
	for(i=2;i<=l/2;i++)
	{
		if(l%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}
    return 0;
}
