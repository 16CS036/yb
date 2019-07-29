#include <stdio.h>

int main()
{
    int s[10],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]<s[j])
            {
                continue;
                
            }
            else
            {
                printf("%d",i);
            }
        }
    }

    return 0;
}
