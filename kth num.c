#include <stdio.h>

int main()
{
    int N,k,s[10],i;
    scanf("%d",&N);
    scanf("%d",&k);
    for(i=1;i<=5;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=1;i<=5;i++)
    {
        if(i==k)
        {
            printf("%d",s[i]);
        }
    }


    return 0;
}
