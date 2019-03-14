#include <stdio.h>

int main()
{
    int n,temp,flag=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=1)
    {
        if(temp%2==0)
        {
            flag=1;
        }
    temp=temp/2;
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
