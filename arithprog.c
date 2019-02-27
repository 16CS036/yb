#include <stdio.h>

int main()
{
    int n,a,b,i,sum;
    printf("enter the integer value");
    scanf("%d",&n);
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        sum = (n * (2 * a + (n - 1)* b))/ 2;
    }
    printf("%d",sum);

    return 0;
}
