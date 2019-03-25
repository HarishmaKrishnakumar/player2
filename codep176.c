#include <stdio.h>

int main()
{
    char s1[10000],s2[10000];
    int i,j,c1=0,l2,c2=0,l1;
    scanf("%s %s",s1,s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;s1[i]!=NULL;i++)
    {
        for(j=0;s2[j]!=NULL;j++)
        {
            if(s1[i]==s2[j])
            {
                c1++;
                break;
            }
        }
    }
     for(i=0;s2[i]!=NULL;i++)
    {
        for(j=0;s1[j]!=NULL;j++)
        {
            if(s2[i]==s1[j])
            {
                c2++;
                break;
            }
        }
    }
    if(c1==l1 && c2==l2)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}
