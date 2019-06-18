#include <stdio.h>

int main()
{
    int n,p,r,s;
    scanf("%d",&n);
    scanf("%d",&p);
    scanf("%d",&r);
    s=(n*p)%r;
    printf("%d",s);

    return 0;
}
