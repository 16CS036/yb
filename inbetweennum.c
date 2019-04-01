#include <stdio.h>

int main()
{
     int n,a,b;
     printf("enter the number");
     scanf("%d",&n);
     scanf("%d%d",&a,&b);
     if(n>=a&&n<=b)
     {
         printf("yes");
     }
    else
    {
        printf("no");
    }

    return 0;
}
