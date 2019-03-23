#include <stdio.h>

int main()
{
    int a,b;
    int s[10],i,count=0;
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
            count++;
        
        }
    }
    printf("%d",count);

    return 0;
}
