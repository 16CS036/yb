#include <stdio.h>

int main()
{
    int a,b;
    int s[10],i,flag;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<5;i++)
    {
        if(s[i]==b)
        {
            flag=1;
        }
    }
        if(flag==1)
        {
            printf("yes");
            
        }
        else
        {
            printf("no");
        }
    

    

    return 0;
}
