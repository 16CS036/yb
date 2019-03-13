#include <stdio.h>

int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        if(n==i)
        {
            count++;
        }
        
    }
    if(count==0)
    {
        printf("no");
    }
    else
    {
        printf("Yes");
    }

    return 0;
}
