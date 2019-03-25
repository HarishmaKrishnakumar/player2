#include <stdio.h>

int main()
{
    char str[10000];
   int i,c=0,l;
    scanf("%s",str);
   l=strlen(str);
   for(i=0;str[i]!='\0';i++)
   {
  if(str[i]=='a'||str[i]=='b')
       c++;
      }

   if(c==l)
     {
      printf("yes");
     }
  else if(c==l-1)
     {
     printf("yes");
     }
   else
     {
     printf("no");
     }
    return 0;
}
