#include <stdio.h>

int main()
{
    int a[10],i,b;
    printf("enter the string");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    b=a[0];
    for(i=0;i<=10;i++)
    {
        if(b>a[i])
        {
            b=b;
        }
        else
        {
            b=a[i];
        }
    }
    printf("%d",b);

    return 0;

}
