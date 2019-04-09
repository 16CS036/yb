#include <stdio.h>

int main()
{
    int n,s[10],sum=0,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+s[i];
    }
    printf("%d",sum);

    return 0;
}
