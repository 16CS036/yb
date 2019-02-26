#include <stdio.h>
#include<string.h>

int main()
{
    char a[10];
    int i,l,flag=0;
    printf("enter the string");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<=l;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            flag=1;
        }
    }
    if(flag!=0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
