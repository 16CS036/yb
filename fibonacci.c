#include <stdio.h>

int main()
{
    int n,t1=0,t2=1,i,a;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d",t1);
        a=t1+t2;
        t1=t2;
        t2=a;
        
        
    }

    return 0;
}
