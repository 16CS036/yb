#include <stdio.h>

int main()
{
    int n,a,d,sum=0,tn,i;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&d);
    sum = (n * (2 * a + (n - 1) * d)) / 2;
     tn = a + (n - 1) * d;
    i = a;
    printf("\n The Sum of Series A.P. : ");
    while(i <= tn)
    {
        if(i != tn)
            printf("%d + ", i);
        else
            printf("%d = %d", i, sum);
        i = i + d;
    }
    printf("\n");
    printf("%d",sum);

    return 0;
}
