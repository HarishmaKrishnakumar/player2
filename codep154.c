#include <stdio.h>

int main()
{
    char str[1000];
int K,i;
scanf("%s",str);
scanf("%d",&K);

for(i=0+K-1;str[i]!='\0';i=i+K)
{
 if(str[i]>=97 && str[i]<=122)
    {
			str[i]=str[i]-32;
    }
}    
printf("%s ",str);
    return 0;
}
