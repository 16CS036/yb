
#include <stdio.h>

int main()
{
    int s[10],i,a,n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    a=s[0];
    for(i=1;i<n;i++)
    {
        if(s[i]<a)
        {
            a=s[i];
        }
    }
    printf("%d",a);

    return 0;
}
