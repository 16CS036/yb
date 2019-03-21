#include <stdio.h>
#include<string.h>

int main()
{
    char s[10];
    int l,flag=1,flag1=2,flag2=0,i;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            flag=1;
        }
        else if((s[i]>='a')&&(s[i]<='z')||(s[i]>='A')&&(s[i]<='Z'))
        {
            flag1=2;
        }
        else
        {
            flag2=0;
        }
    }
    if((flag==1)&&(flag1==2))
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }


    return 0;
}
