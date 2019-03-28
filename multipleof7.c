#include <stdio.h>

int main()
{
    int n,i,flag=0;
	printf("enter the value");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	    if(n%7==0)
	    {
	        flag=1;
	    }
	    
	}
	if(flag==1)
	{
	    printf("yes");
	}
	else
	{
	    printf("No");
	}

    return 0;
}
