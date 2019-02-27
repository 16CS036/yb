#include <stdio.h>

int main()
{
    int a,b,a1,b1,hrs,min;
    printf("enter the first value");
    scanf("%d%d",&a,&b);
    printf("enter the sec value");
    scanf("%d%d",&a1,&b1);
    if(a>a1)
    {
        hrs=a-a1;
        printf("%d",hrs);
    }
    else
    {
        hrs=a1-a;
        printf("%d",hrs);
    }
    if(b>b1)
    {
        min=b-b1;
        printf("%d",min);
    }
    else
    {
        min=b1-b;
        printf("%d",min);
    }

    return 0;
}

