#include <stdio.h>

int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=r+s*10;
        n=n/10;
    }
    printf("%d",s);
    return 0;
}