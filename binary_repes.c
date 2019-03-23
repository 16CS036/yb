#include <stdio.h>

int main()
{
    char s[10];
    int i,l,flag;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='0')
        {
            flag=1;
        }
        else if(s[i]=='1')
        {
            flag=2;
        }
        else
        {
            flag=3;
        }
    }
    if(flag==1||flag==2)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
