#include <stdio.h>

int main()
{
    int n,s=0,i=0,r,rev;
    scanf("%d",&n);
    rev=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==rev)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
