#include <stdio.h>

int main()
{
    int n,m,r=1;
    scanf("%d",&n);
    scanf("%d",&m);
    while(m!=0)
    {
        r*=n;
        --m;
    }
    printf("%d",r);
    
    

    return 0;
}
