#include <stdio.h>
#include<string.h>

int main()
{
    int a[10],i,n;
    printf("enter the integer");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d%d",a[i],i);
        printf("\n");
    }
    return 0;
}
