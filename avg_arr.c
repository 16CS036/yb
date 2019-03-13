#include <stdio.h>

int main()
{
    int s[10],n,a=0,avg,i;
    printf("enter the integer value");
    scanf("%d",&n);
    printf("enter the values");
    for(i=1;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=1;i<n;i++)
    {
        a=a+s[i];
    }
    avg=a/n;
    printf("%d",avg);

    return 0;
}
