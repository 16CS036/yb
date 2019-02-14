#include <stdio.h>

int main()
{ 
int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a+2;i<b;i++)
    {
    if(i%2==0)
    {
        printf("%d",i);
    }
    }
    return 0;
}
