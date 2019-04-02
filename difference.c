#include <stdio.h>

int main()
{
    int a,b,sum;
	printf("enter the number:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
	    sum=a-b;
	    printf("%d",sum);
	}
	else
	{
	    sum=b-a;
	    printf("%d",sum);
	}
    return 0;
}
