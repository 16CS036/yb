#include <stdio.h>

int main()
{
    int s[10],n,a,i,b;
    printf("enter the integer value");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&s[i]);
    }
    a=s[0];
    b=s[0];
    for(i=0;i<=n;i++)
    {
        if(s[i]>a)
        {
            a=s[i];
            
        }
        if(s[i]<b)
        {
            b=s[i];
        }
    }
    printf("%d",a);
    printf("%d",b);
    return 0;
}
