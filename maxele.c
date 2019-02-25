#include <stdio.h>

int main()
{
int n,a[10],i,s;
printf("enter the integer value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
s=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>s)
    {
        s=a[i];
    }}
    printf("%d",s);



    return 0;
}
