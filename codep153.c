#include <stdio.h>

int main()
{
    char str[1000];
int K,i;
scanf("%s",str);
scanf("%d",&K);

for(i=0+K-1;str[i]!='\0';i=i+K)
{
printf("%c ",str[i]);
}
    return 0;
}
